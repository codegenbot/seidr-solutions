#include <vector>
#include <cmath>
#include <cassert>

int do_algebra(std::vector<std::string> operato, int operand1) {
    int result = operand1;
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "/") {
            if (result == 0)
                return 0;
            result /= std::stoi(operand1 + operato[++i]);
        } else if (operato[i] == "*") {
            result *= std::stoi(operand1 + operato[++i]);
        } else if (operato[i] == "+") {
            result += std::stoi(operand1 + operato[++i]);
        } else if (operato[i] == "-") {
            result -= std::stoi(operand1 + operato[++i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, 7) == 8);
    return 0;
}