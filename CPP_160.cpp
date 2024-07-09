#include <utility>
#include <vector>

int do_algebra(std::vector<std::pair<char, int>>& operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }

    int result = operators_and_operands[0].second;
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            result += pair.second;
        } else if (pair.first == '-') {
            result -= pair.second;
        } else if (pair.first == '*') {
            result *= pair.second;
        } else if (pair.first == '/') {
            if (pair.second != 0) {
                result /= pair.second;
            }
        } else if (pair.first == '**') {
            result = pow(result, pair.second);
        }
    }
    return result;
}