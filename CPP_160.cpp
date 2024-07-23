#include <vector>
#include <cmath>
#include <cassert>
#include <string>
#include <initializer_list>

int do_algebra(const std::vector<std::string>& operato, const std::vector<int>& operand) {
    int result = operand[0];
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "/") { 
            assert(operand[i + 1] != 0);
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = std::pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, {7, 3, 4}) == 8);
}