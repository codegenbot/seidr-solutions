```cpp
#include <vector>
#include <string>
#include <cmath>

int doAlgebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (operators[i-1] == "+") {
            result += operands[i];
        } else if (operators[i-1] == "-") {
            result -= operands[i];
        }
    }
    return result;
}