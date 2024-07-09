#include <vector>
#include <cmath>

int do_algebra(vector<pair<char, int>> operators_and_operands) {
    int result = operators_and_operands[0].second;
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            result += pair.second;
        } else if (pair.first == '-') {
            result -= pair.second;
        } else if (pair.first == '*') {
            result *= pair.second;
        } else if (pair.first == '//') {
            result = result / pair.second;
        } else if (pair.first == '**') {
            result = pow(result, pair.second);
        }
    }
    return result;
}