int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            int temp = 1;
            for (int j = i + 1; j <= operand.size() - 1; j++) {
                temp *= operand[j];
            }
            result += temp;
        } else if (operator_[i] == "//") {
            int temp = operand[i + 1] / 1;
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = pow(operand[i + 1], 1);
            result += temp;
        }
    }
    return result;
}