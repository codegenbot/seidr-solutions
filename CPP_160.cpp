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

double do_algebra(vector<vector<string>> expressions) {
    double result = 0;
    string operators = expressions[2][1];

    if (stoi(operators) == 0) {
        if (expressions[2][0] == "+") {
            result = pow(stod(expressions[0][0]), stod(expressions[1][0]));
        } else if (expressions[2][0] == "-") {
            result = pow(stod(expressions[0][0]), -stod(expressions[1][0]));
        }
    } else if (stoi(operators) == 42 || stoi(operators) == 47) {
        if (expressions[1][0] == "0") {
            if (expressions[2][0] == "+") {
                result = stod(expressions[0][0]);
            } else if (expressions[2][0] == "-") {
                result = -stod(expressions[0][0]);
            }
        } else if (expressions[1][0] != "0") {
            if (expressions[2][0] == "+") {
                result = stod(expressions[0][0]) + stod(expressions[1][0]);
            } else if (expressions[2][0] == "-") {
                result = stod(expressions[0][0]) - stod(expressions[1][0]);
            } else if (expressions[2][0] == "*") {
                result = stod(expressions[0][0]) * stod(expressions[1][0]);
            }
        }
    }
    return result;
}

int main() {
    vector<vector<string>> expressions;
    string input;

    cout << "Enter the expressions (space separated): ";
    getline(cin, input);
    vector<string> temp = split(input);
    for (int i = 0; i < 3; i++) {
        expressions.push_back(split(temp[i]));
    }

    double output = do_algebra(expressions);
    cout << "Result: " << output << endl;
    return 0;
}