#include <utility>
#include <vector>

int do_algebra(vector<pair<char, int>> operators_and_operands) {
    if (operators_and_opernds.size() == 0) {
        return 0;
    }
    
    int result = operators_and_opernds[0].second;
    for (const auto& pair : operators_and_opernds) {
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