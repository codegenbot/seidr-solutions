int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp += operand[j];
                if (j == i) continue;
                if (operator_[j - i] == "+") result += temp;
                else if (operator_[j - i] == "-") result -= temp;
                else if (operator_[j - i] == "*") result *= temp;
            }
        } else if (operator_[i] == "///") {
            int temp = operand[i];
            for (int j = i + 1; j < operand.size(); j++) {
                temp /= operand[j];
                if (operator_[j - i] == "+") result += temp;
                else if (operator_[j - i] == "-") result -= temp;
            }
        } else if (operator_[i] == "**") {
            int base = operand[i];
            for (int j = i + 1; j < operand.size(); j++) {
                base = pow(base, operand[j]);
                if (operator_[j - i] == "+") result += base;
                else if (operator_[j - i] == "-") result -= base;
            }
        }
    }
    return result;
}