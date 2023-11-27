#include <vector>
#include <string>
#include <cmath>

int perform_algebra(const std::vector<std::string>& operators, const std::vector<int>& operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i+1];
        } else if (operators[i] == "-") {
            result -= operands[i+1];
        } else if (operators[i] == "*") {
            result *= operands[i+1];
        } else if (operators[i] == "//") {
            result /= operands[i+1];
        } else if (operators[i] == "**") {
            result = std::pow(result, operands[i+1]);
        }
    }
    return result;
}