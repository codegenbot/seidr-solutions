#include <vector>
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
                } else if (operators[j] == "+") {
                    result += temp * operands[j + 1];
                    break;
                }
            }
        } else if (operators[i] == "//") {
            int temp = operands[i + 1];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "//") {
                    temp /= operands[j + 1];
                } else if (operators[j] == "+") {
                    result += temp / operands[j + 1];
                    break;
                }
            }
        } else if (operators[i] == "**") {
            int temp = pow(operands[i + 1], 1);
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "**") {
                    temp = pow(temp, operands[j + 1]);
                } else if (operators[j] == "+") {
                    result += temp;
                    break;
                }
            }
        }
    }
    return result;
}