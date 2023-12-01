#include <iostream>
#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0]; // Initialize result with the first operand

    for (int i = 0; i < operato.size(); i++) {
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
    std::vector<std::string> operato{"+", "*", "-"};
    std::vector<int> operand{2, 3, 4, 5};

    int result = do_algebra(operato, operand);
    std::cout << "Result: " << result << std::endl;

    return 0;
}