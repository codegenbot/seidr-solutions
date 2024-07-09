#include <vector>
#include <cmath>

std::vector<std::pair<char, int>> get_input() {
    int numOperators;
    std::cin >> numOperators;

    std::vector<std::pair<char, int>> operators_and_operands;

    for (int i = 0; i < numOperators; ++i) {
        char op;
        int operand;
        std::cin >> op >> operand;
        operators_and_operands.push_back({op, operand});
    }

    return operators_and_operands;
}

int do_algebra(std::vector<std::pair<char, int>> operators_and_operands) {
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
            result = std::pow(result, pair.second);
        }
    }
    return result;
}

int main() {
    auto operators_and_operands = get_input();
    int output = do_algebra(operators_and_operands);
    std::cout << output << std::endl;
    return 0;
}