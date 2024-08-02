int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int num1 = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        string op = operator_[i];
        if (op == "+") {
            num1 += operand[i + 1];
        } else if (op == "-") {
            num1 -= operand[i + 1];
        } else if (op == "*") {
            num1 *= operand[i + 1];
        } else if (op == "//") {
            num1 = num1 / operand[i + 1];
        } else if (op == "**") {
            num1 = pow(num1, operand[i + 1]);
        }
    }
    return num1;
}