```cpp
#include <vector>
#include <string>
#include <cmath>

int doAlgebra(std::vector<std::string> operators, std::vector<int> operands) {
    if (operators.size() != operands.size()) {
        return -1;
    }
    for (size_t i = 0; i < operators.size(); ++i) {
        if (operators[i] == "+") {
            operands[i] += operands[i + 1];
        } else if (operators[i] == "-") {
            operands[i] -= operands[i + 1];
        } else if (operators[i] == "*") {
            operands[i] *= operands[i + 1];
        } else if (operators[i] == "/") {
            if (operands[i + 1] != 0) {
                operands[i] /= operands[i + 1];
            } else {
                return -2;
            }
        }
    }
    return 0;
}