#include <vector>
#include <string>

int do_algebra(std::vector<std::string> ops, std::vector<int> operands) {
    int result = 0;
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += operands[i];
        } else if (ops[i] == "-") {
            result -= operands[i];
        } else if (ops[i] == "*") {
            int temp = operands[i];
            for (int j = i + 1; j < ops.size(); j++) {
                if (ops[j] == "*") {
                    temp *= operands[j];
                } else if (ops[j] == "+") {
                    result += temp;
                    break;
                }
            }
        } else if (ops[i] == "//") {
            int temp = operands[i];
            for (int j = i + 1; j < ops.size(); j++) {
                if (ops[j] == "//") {
                    temp /= operands[j];
                } else if (ops[j] == "+") {
                    result += temp;
                    break;
                }
            }
        } else if (ops[i] == "**") {
            int temp = 1;
            for (int j = i; j < ops.size(); j++) {
                if (ops[j] == "**") {
                    temp *= pow(operands[j], 1);
                } else if (ops[j] == "+") {
                    result += temp;
                    break;
                }
            }
        }
    }
    return result;
}