```
#include <vector>
#include <cmath>
#include <cassert>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 1; i < operato.size(); i++) {
        if (operato[i-1] == "//") {
            if (operand[i] == 0)
                return 0;
            result /= static_cast<double>(operand[i]);
        } else if (operato[i-1] == "*") {
            result *= operand[i];
        } else if (operato[i-1] == "+") {
            result += operand[i];
        } else if (operato[i-1] == "-") {
            result -= operand[i];
        }
    }
    return static_cast<int>(result);
}

assert( do_algebra(vector<string>({"//", "*"}), vector<int>({7, 3, 4})) == 8);