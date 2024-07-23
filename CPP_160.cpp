```
#include <vector>
#include <cmath>
#include <cassert>
#include <string>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 1; i < operato.size(); i++) {
        if (operato[i-1] == "/") {
            if (operand[i] == 0)
                return 0;
            result /= operand[i];
        } else if (operato[i-1] == "*") {
            result *= operand[i];
        } else if (operato[i-1] == "+") {
            result += operand[i];
        } else if (operato[i-1] == "-") {
            result -= operand[i];
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, {7, 3, 4}) == 8);
}