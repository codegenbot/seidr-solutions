#include <vector>
#include <cmath>

int doAlgebra(std::vector<char> operators, std::vector<int> operands) {
    int result = 0;
    for (int i = 1; i < operands.size(); i++) {
        if (operators[0] == '+') {
            result += operands[i];
        } else if (operators[0] == '-') {
            result -= operands[i];
        } else if (operators[0] == '*') {
            result *= operands[i];
        } else if (operators[0] == '/') {
            result = result / operands[i];
        } else if (operators[0] == '^') {
            result = pow(result, operands[i]);
        }
    }
    return result;
}