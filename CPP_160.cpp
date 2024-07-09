#include <iostream>
#include <vector>
#include <utility>

struct pair {
    char first;
    int second;
};

int do_algebra(std::vector<pair> operators_and_operands) {
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
        } else if (pair.first == '^') { 
            result = std::pow(result, pair.second);
        }
    }
    return result;
}

int main() {
    int n;
    char op;
    std::vector<pair> operators_and_operands;

    while (std::cin >> n >> op) {
        operators_and_operands.push_back({op, n});
    }

    if (!std::cin.eof()) {
        // Handle invalid input
    }

    int result = do_algebra(operators_and_operands);

    std::cout << "Result: " << result << std::endl;

    return 0;
}