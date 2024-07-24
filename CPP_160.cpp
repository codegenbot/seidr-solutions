#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<string> splitOperator(vector<string>& expressions) {
    vector<string> operators;
    string temp;

    for (int i = 0; i < expressions.size(); i++) {
        if (expressions[i] == "+-*/" || expressions[i] == "42" || expressions[i] == "47") {
            if (!temp.empty()) {
                operators.push_back(temp);
                temp = "";
            }
            operators.push_back(expressions[i]);
        } else {
            temp += expressions[i];
        }
    }
    if (!temp.empty()) {
        operators.push_back(temp);
    }

    return operators;
}

vector<string> splitExpressions(vector<string>& input) {
    vector<string> expressions;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "42" || input[i] == "47") {
            continue;
        }
        expressions.push_back(input[i]);
    }

    return expressions;
}

double do_algebra(vector<string> expressions) {
    double result = 0.0;

    vector<string> op = splitOperator(expressions);

    if (stod(op[2]) == 42) {
        if (expressions[1] == "0") {
            if (op[0][0] == '+') {
                result = pow(stod(expressions[0]), stod(expressions[1]));
            } else if (op[0][0] == '-') {
                result = pow(stod(expressions[0]), -stod(expressions[1]));
            }
        } else if (expressions[1] != "0") {
            if (op[0][0] == '+') {
                result = stod(expressions[0]) + stod(expressions[1]);
            } else if (op[0][0] == '-') {
                result = stod(expressions[0]) - stod(expressions[1]);
            }
        }
    } else if (stod(op[2]) == 47) {
        if (expressions[1] == "0") {
            if (op[0][0] == '+') {
                result = -stod(expressions[0]);
            } else if (op[0][0] == '-') {
                result = stod(expressions[0]);
            }
        } else if (expressions[1] != "0") {
            if (op[0][0] == '+') {
                result = stod(expressions[0]) + (-stod(expressions[1]));
            } else if (op[0][0] == '-') {
                result = stod(expressions[0]) - stod(expressions[1]);
            }
        }
    }

    return result;
}

int main() {
    vector<string> input;

    cout << "Enter the expressions (space separated): ";
    getline(cin, input);
    if (!input.empty()) {
        vector<string> expressions = splitExpressions(input);

        double output = do_algebra(expressions);
        cout << "Result: " << output << endl;
    }

    return 0;
}