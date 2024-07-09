```
#include <vector>
#include <cmath>

int do_algebra(vector<pair<char, int>> operators_and_operands) {
    int result = operators_and_operands[0].second;
    for (int i = 0; i < operators_and_operands.size(); i++) {
        if (operators_and_operands[i].first == '+') {
            result += operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '-') {
            result -= operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '*') {
            result *= operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '/') {
            result = result / operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '^') {
            result = pow(result, operators_and_operands[i].second);
        }
    }
    return result;
}