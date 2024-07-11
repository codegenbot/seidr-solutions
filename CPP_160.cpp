long long do_algebra(vector<string> operator_, vector<int> operand) {
    long long result = (long long)operand[0];
    for (int i = 1; i < operator_.size(); ++i) {
        if (operator_[i] == "+") {
            result += (long long)operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= (long long)operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= (long long)operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / (long long)operand[i + 1];
        } else if (operator_[i] == "**") {
            result = pow((double)result, (double)operand[i + 1]);
        }
    }
    return result;
}