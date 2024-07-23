```cpp
#include <vector>
#include <string>

int do_algebra(std::vector<std::pair<char, int>> operatoAndOperand) {
    int result = operatoAndOperand[0].second;
    for (int i = 1; i < operatoAndOperand.size(); i++) {
        if (operatoAndOperand[i-1].first == '/') {
            if (operatoAndOperand[i].second == 0)
                return 0;
            result /= operatoAndOperand[i].second;
        } else if (operatoAndOperand[i-1].first == "*") {
            result *= operatoAndOperand[i].second;
        } else if (operatoAndOperand[i-1].first == "+") {
            result += operatoAndOperand[i].second;
        } else if (operatoAndOperand[i-1].first == "-") {
            result -= operatoAndOperand[i].second;
        }
    }
    return result;
}

assert(do_algebra({{'+', 1}}) == 2);