int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = 0; j <= i; j++) {
                temp *= operand[j];
            }
            result = temp;
        } else if (operator_[i] == "//") {
            result /= operand[i + 1];
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = 0; j <= i; j++) {
                temp *= operand[j];
            }
            result = pow(temp, operand[i + 1]);
        }
    }
    return result;
}