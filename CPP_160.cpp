#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <wstringstream>

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

double do_algebra(vector<string> expressions) {
    double result = 0;
    string operators = expressions[2];

    if (stoi(operators[1]) == 0) {
        result = pow(stod(expressions[0]), stod(expressions[1]));
    } else if (stoi(operators[1]) == 42) { 
        if (expressions[1] == "0") {
            if (expressions[2][0] == '+') {
                result = stod(expressions[0]);
            } else if (expressions[2][0] == '-') {
                result = -stod(expressions[0]);
            }
        } else if (expressions[1] != "0") {
            if (expressions[2][0] == '+') {
                result = stod(expressions[0]) + stod(expressions[1]);
            } else if (expressions[2][0] == '-') {
                result = stod(expressions[0]) - stod(expressions[1]);
            } else if (expressions[2][0] == '*') {
                result = stod(expressions[0]) * stod(expressions[1]);
            }
        }
    } else if (stoi(operators[1]) == 47) { 
        if (expressions[1] == "0") {
            if (expressions[2][0] == '+') {
                result = -stod(expressions[0]);
            } else if (expressions[2][0] == '-') {
                result = stod(expressions[0]);
            }
        } else if (expressions[1] != "0") {
            if (expressions[2][0] == '+') {
                result = stod(expressions[0]) + (-stod(expressions[1]));
            } else if (expressions[2][0] == '-') {
                result = stod(expressions[0]) - stod(expressions[1]);
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

    double output = do_algebra(expressions);
    cout << "Result: " << output << endl;
    return 0;
}