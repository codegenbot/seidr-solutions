```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += operands[i];
        } else if (ops[i] == "-") {
            result -= operands[i];
        } else if (ops[i] == "*") {
            int temp = 0;
            for (int j = i; j < ops.size(); j++) {
                if (ops[j] == "*") {
                    temp *= operands[j + 1];
                } else if (ops[j] == "+") {
                    result += temp * operands[j + 1];
                    break;
                }
            }
        } else if (ops[i] == "//") {
            int temp = operands[i + 1];
            for (int j = i + 1; j < ops.size(); j++) {
                if (ops[j] == "//") {
                    temp /= operands[j + 1];
                } else if (ops[j] == "+") {
                    result += temp / operands[j + 1];
                    break;
                }
            }
        } else if (ops[i] == "**") {
            int temp = pow(operands[i + 1], 1);
            for (int j = i + 1; j < ops.size(); j++) {
                if (ops[j] == "**") {
                    temp = pow(temp, operands[j + 1]);
                } else if (ops[j] == "+") {
                    result += temp;
                    break;
                }
            }
        }
    }
    return result;
}