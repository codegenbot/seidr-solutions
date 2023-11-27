#include <vector>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "//") {
            result /= operands[i + 1];
        } else if (operators[i] == "**") {
            int exponent = operands[i + 1];
            for (int j = 1; j < exponent; j++) {
                result *= result;
            }
        }
    }
    return result;
}