#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(string str) {
    vector<string> result;
    string temp;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result.push_back(temp);
            temp = "";
        } else {
            temp += str[i];
        }
    }
    result.push_back(temp);
    return result;
}

double do_algebra(string expression1, string expression2, string operators) {
    double result = 0;
    if (stoi(operators[1]) == 0) {
        result = pow(stod(expression1), stod(expression2));
    } else if (stoi(operators[1]) == 42) { 
        if (expression2 == "0") {
            if (operators[0] == '+') {
                result = stod(expression1);
            } else if (operators[0] == '-') {
                result = -stod(expression1);
            }
        } else if (expression2 != "0") {
            if (operators[0] == '+') {
                result = stod(expression1) + stod(expression2);
            } else if (operators[0] == '-') {
                result = stod(expression1) - stod(expression2);
            } else if (operators[0] == '*') {
                result = stod(expression1) * stod(expression2);
            }
        }
    } else if (stoi(operators[1]) == 47) { 
        if (expression2 == "0") {
            if (operators[0] == '+') {
                result = -stod(expression1);
            } else if (operators[0] == '-') {
                result = stod(expression1);
            }
        } else if (expression2 != "0") {
            if (operators[0] == '+') {
                result = stod(expression1) + (-stod(expression2));
            } else if (operators[0] == '-') {
                result = stod(expression1) - stod(expression2);
            }
        }
    }
    return result;
}

int main() {
    vector<string> expressions;
    string input;

    cout << "Enter the expressions (space separated): ";
    getline(cin, input);
    expressions = split(input);

    double output = do_algebra(expressions[0], expressions[1], expressions[2]);
    cout << "Result: " << output << endl;
    return 0;
}