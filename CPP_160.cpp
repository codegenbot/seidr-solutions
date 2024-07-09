int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / operand[i + 1];
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}