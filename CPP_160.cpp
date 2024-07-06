```c++
#include <vector>
#include <cmath>

int doAlgebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "//") {
            result = static_cast<int>(result / operands[i + 1]);
        } else if (operators[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}