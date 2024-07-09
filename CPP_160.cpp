int do_algebra(std::vector<std::pair<char, int>> operators_and_operands) {
    int result = operators_and_operands[0].second;
    for (int i = 1; i < operators_and_operands.size(); i++) {
        if (operators_and_operands[i].first == '+') {
            result += operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '-') {
            result -= operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '*') {
            result *= operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '/') {
            result /= operators_and_operands[i].second;
        } else if (operators_and_operands[i].first == '^') {
            result = pow(result, operators_and_operands[i].second);
        }
    }
    return result;
}