#include <vector>
#include <cmath>

int doAlgebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = 0;
    for (int i = 1; i < operands.size(); i++) {
        if (*operators.begin() == "+") {
            result += operands[i];
        } else if (*operators.begin() == "-") {
            result -= operands[i];
        } else if (*operators.begin() == "*") {
            result *= operands[i];
        } else if (*operators.begin() == "//") {
            result = result / operands[i];
        } else if (*operators.begin() == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}