#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0];
    for (size_t i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> operators = {"+", "*", "-"};
    std::vector<int> operands = {2, 3, 4, 5};
    int result = do_algebra(operators, operands);
    std::cout << "Result: " << result << std::endl;
    return 0;
}