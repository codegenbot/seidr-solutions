#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            result -= operands[i];
        } else if (operators[i] == "*") {
            int temp = 1;
            for (int j = i; j < operators.size(); j++) {
                if (operators[j] == "*") {
                    temp *= operands[j + 1];
                } else if (operators[j] == "/") {
                    temp /= operands[j + 1];
                } else if (operators[j] == "**") {
                    temp = pow(temp, operands[j + 1]);
                }
            }
            result += temp;
        } else if (operators[i] == "/") {
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "*") {
                    temp *= operands[j + 1];
                } else if (operators[j] == "/") {
                    temp /= operands[j + 1];
                } else if (operators[j] == "**") {
                    temp = pow(temp, operands[j + 1]);
                }
            }
            result += temp;
        } else if (operators[i] == "**") {
            int temp = 1;
            for (int j = i; j < operators.size(); j++) {
                if (operators[j] == "*") {
                    temp *= operands[j + 1];
                } else if (operators[j] == "/") {
                    temp /= operands[j + 1];
                } else if (operators[j] == "**") {
                    temp = pow(temp, operands[j + 1]);
                }
            }
            result += pow(operands[0], temp);
        }
    }
    return result;
}