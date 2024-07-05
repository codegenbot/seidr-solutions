#include <vector>
#include <cmath>
#include <string>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0];  // Start with the first operand

    for (size_t i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result /= operand[i + 1];  // Assuming floor division as integer division
        } else if (operato[i] == "**") {
            result = std::pow(result, operand[i + 1]);
        }
    }

    return result;
}