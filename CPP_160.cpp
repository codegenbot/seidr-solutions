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
                    temp += operand[j + 1] * operand[j];
                } else if (operator_[j] == "+") {
                    result += temp;
                    break;
                }
            }
        } else if (operator_[i] == "//") {
            int temp = operand[i];
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "//") {
                    temp /= operand[j + 1];
                } else if (operator_[j] == "+") {
                    result += temp;
                    break;
                }
            }
        } else if (operator_[i] == "**") {
            int base = operand[i];
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "**") {
                    base = pow(base, operand[j + 1]);
                } else if (operator_[j] == "+") {
                    result += base;
                    break;
                }
            }
        }
    }
    return result;
}