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
            int temp = 1;
            for (int j = i; j < operands.size(); j++) {
                temp *= operands[j];
                if (j < ops.size() - 1 && ops[j + 1] == "**") {
                    temp = pow(temp, operands[j + 1]);
                }
            }
            result += temp;
        } else if (ops[i] == "//") {
            int temp = operands[i];
            for (int j = i + 1; j < operands.size(); j++) {
                temp /= operands[j];
            }
            result = temp;
        } else if (ops[i] == "**") {
            int temp = 1;
            for (int j = i; j < operands.size(); j++) {
                temp *= operands[j];
            }
            result = pow(operands[0], temp);
        }
    }
    return result;
}