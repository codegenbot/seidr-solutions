int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression;

    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operator_[i] + " ";
            expression += to_string(operand[i]);
        }
    }

    int temp = operand[0];
    for (int i = 1; i < operand.size(); i++) {
        if (operator_[i-1] == "+") {
            temp += operand[i];
        } else if (operator_[i-1] == "-") {
            temp -= operand[i];
        } else if (operator_[i-1] == "*") {
            temp *= operand[i];
        } else if (operator_[i-1] == "//*") {
            temp /= operand[i];
        } else if (operator_[i-1] == "**") {
            temp = pow(temp, operand[i]);
        }
    }

    return temp;
}