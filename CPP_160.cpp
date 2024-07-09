int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += temp * operand[i];
        } else if (operator_[i] == "-") {
            result -= temp * operand[i];
        } else if (operator_[i] == "*") {
            temp *= operand[i];
        } else if (operator_[i] == "//") {
            temp = temp / operand[i];
        } else if (operator_[i] == "**") {
            temp = pow(temp, operand[i]);
        }
    }

    return result;
}