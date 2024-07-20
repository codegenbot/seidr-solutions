int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operator_.size(); ++i) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 1;
            for (int j = i; j < operand.size(); ++j) {
                temp *= operand[j];
            }
            result += temp;
        } else if (operator_[i] == "//") {
            int temp = operand[i-1] / operand[i];
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operand.size(); ++j) {
                temp *= operand[j];
            }
            result = pow(result, temp);
        }
    }
    return result;
}