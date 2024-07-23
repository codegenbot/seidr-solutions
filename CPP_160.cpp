```cpp
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
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "/") {
                    if (operands[j] == 0) {
                        return -1;
                    }
                    temp /= operands[j];
                } else if (operators[j] == "**") {
                    temp = pow(temp, operands[j]);
                }
            }
            result += temp;
        } else if (operators[i] == "/") {
            if (operands[i] == 0) {
                return -1;
            }
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "**") {
                    temp = pow(temp, operands[j]);
                    break;
                } else if (j < operators.size() - 1 && operators[j + 1] == "/") {
                    if (operands[j + 1] == 0) {
                        return -1;
                    }
                    temp /= operands[j + 1];
                }
            }
            result += temp;
        } else if (operators[i] == "//") {
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                temp /= operands[j];
            }
            result += temp;
        } else if (operators[i] == "**") {
            int temp = 1;
            for (int j = i; j < operators.size(); j++) {
                temp *= operands[j];
            }
            result = pow(result, temp);
        }
    }
    return result;
}