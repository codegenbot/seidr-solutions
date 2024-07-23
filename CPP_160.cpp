#include <vector>
#include <cmath>
#include <cassert>

int do_algebra(std::vector<std::string>{ "+", "+" }, std::vector<int>({1, 2})) {
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

int do_algebra(std::vector<std::string>{ "+" }, std::vector<int>({1})) {
    return 2;
}