int do_algebra(vector<string> operator_, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operands[i + 1];
        } else if (operator_[i] == "-") {
            result -= operands[i + 1];
        } else if (operator_[i] == "*") {
            result *= operands[i + 1];
        } else if (operator_[i] == "//") {
            result = result / operands[i + 1];
        } else if (operator_[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}