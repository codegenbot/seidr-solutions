```cpp
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
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else {
            temp += str[i];
        }
    }
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}

double do_algebra(vector<string> expressions) {
    double result = 0;
    string operators = expressions.at(2);

    if (stod(operators) == 0) {
        if (expressions.at(2)[0] == '+') {
            result = pow(stod(expressions.at(0)), stod(expressions.at(1)));
        } else if (expressions.at(2)[0] == '-') {
            result = pow(stod(expressions.at(0)), -stod(expressions.at(1)));
        }
    } else if (stod(operators) == 42) { 
        if (expressions.at(1) == "0") {
            if (expressions.at(2)[0] == '+') {
                result = stod(expressions.at(0));
            } else if (expressions.at(2)[0] == '-') {
                result = -stod(expressions.at(0));
            }
        } else if (expressions.at(1) != "0") {
            if (expressions.at(2)[0] == '+') {
                result = stod(expressions.at(0)) + stod(expressions.at(1));
            } else if (expressions.at(2)[0] == '-') {
                result = stod(expressions.at(0)) - stod(expressions.at(1));
            } else if (expressions.at(2)[0] == '*') {
                result = stod(expressions.at(0)) * stod(expressions.at(1));
            }
        }
    } else if (stod(operators) == 47) { 
        if (expressions.at(1) == "0") {
            if (expressions.at(2)[0] == '+') {
                result = -stod(expressions.at(0));
            } else if (expressions.at(2)[0] == '-') {
                result = stod(expressions.at(0));
            }
        } else if (expressions.at(1) != "0") {
            if (expressions.at(2)[0] == '+') {
                result = stod(expressions.at(0)) + (-stod(expressions.at(1)));
            } else if (expressions.at(2)[0] == '-') {
                result = stod(expressions.at(0)) - stod(expressions.at(1));
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

    if(expressions.size() != 3) {
        cout << "Invalid number of expressions. Please enter exactly three." << endl;
        return 1;
    }

    double output = do_algebra({expressions.at(0), expressions.at(1), expressions.at(2)});
    cout << "Result: " << output << endl;
    return 0;
}