#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    int operand_index = 0;

    for (auto op : operators) {
        if (op == "+") {
            result += operands[operand_index];
            operand_index++;
        } else if (op == "-") {
            result -= operands[operand_index];
            operand_index++;
        } else if (op == "*") {
            int temp = 1;
            for (int i = operand_index; i < operators.size(); i++) {
                if (operators[i] == "*") {
                    temp *= operands[i + 1];
                } else if (operators[i] == "/") {
                    temp /= operands[i + 1];
                }
            }
            result += temp;
            operand_index = i + 2; // skip the rest of the loop
        } else if (op == "/") {
            int temp = operands[operand_index];
            for (int i = operand_index + 1; i < operators.size(); i++) {
                if (operators[i] == "*") {
                    temp *= operands[i + 1];
                } else if (operators[i] == "/") {
                    temp /= operands[i + 1];
                }
            }
            result += temp;
            operand_index = i + 2; // skip the rest of the loop
        } else if (op == "**") {
            int temp = 1;
            for (int i = operand_index; i < operators.size(); i++) {
                if (operators[i] == "*") {
                    temp *= operands[i + 1];
                } else if (operators[i] == "/") {
                    temp /= operands[i + 1];
                }
            }
            result += pow(operands[0], temp);
            operand_index = i + 2; // skip the rest of the loop
        }
    }

    return result;
}