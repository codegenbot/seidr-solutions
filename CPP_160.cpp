#include <vector>
#include <cmath>
#include <utility>

int do_algebra() {
    int numOperators;
    std::cin >> numOperators;

    std::vector<std::pair<char, int>> operators_and_operands;

    for (int i = 0; i < numOperators; ++i) {
        char op;
        int operand;
        std::cin >> op >> operand;
        operators_and_operands.push_back({op, operand});
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
            result = result / pair.second;
        } else if (pair.first == '**') {
            result = pow(result, pair.second);
        }
    }
    return result;
}