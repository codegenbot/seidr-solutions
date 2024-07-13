int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= operand[j + 1];
                } else if (operator_[j] == "+") {
                    result += temp * operand[j + 1];
                    break;
                }
            }
        } else if (operator_[i] == "//") {
            int temp = operand[i + 1];
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "//") {
                    temp /= operand[j + 1];
                } else if (operator_[j] == "+") {
                    result += temp / operand[j + 1];
                    break;
                }
            }
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "**") {
                    temp *= pow(operand[j + 1], 1.0);
                } else if (operator_[j] == "+") {
                    result += temp * pow(operand[j + 1], 1.0);
                    break;
                }
            }
        }
    }
    return result;
}