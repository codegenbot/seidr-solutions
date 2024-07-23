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
            int temp = operands[i];
            for (int j = i + 1; j < ops.size(); j++) {
                if (ops[j] == "/") {
                    temp /= operands[j];
                } else if (ops[j] == "**") {
                    temp = pow(temp, operands[j]);
                }
            }
            result += temp;
        } else if (ops[i] == "//") {
            int temp = operands[i];
            for (int j = i + 1; j < ops.size(); j++) {
                temp /= operands[j];
            }
            result += temp;
        } else if (ops[i] == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}