#include <vector>
#include <utility>
#include <cmath>

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
    assert(do_algebra({{'+', 7}, {'*', 3}, {'+', 4}}) == 14);
    // You can add more test cases here.
    return 0;
}