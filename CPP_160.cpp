int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (operator_[i-1] == "+") {
            result += operand[i];
        } else if (operator_[i-1] == "-") {
            result -= operand[i];
        } else if (operator_[i-1] == "*") {
            result *= operand[i];
        } else if (operator_[i-1] == "//") {
            result /= operand[i];
        } else if (operator_[i-1] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}