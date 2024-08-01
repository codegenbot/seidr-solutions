int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int num1 = operand[0];
    string op;

    for (int i = 0; i < operator_.size(); i++) {
        op = operator_[i];

        if (op == "+") {
            result += operand[i + 1];
        } else if (op == "-") {
            result -= operand[i + 1];
        } else if (op == "*") {
            result *= operand[i + 1];
        } else if (op == "//") {
            result /= operand[i + 1];
        } else if (op == "**") {
            result = pow(result, operand[i + 1]);
        }
    }

    return result;
}