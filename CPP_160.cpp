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
                if (j != operand.size() - 1) {
                    if (operator_[j + 1] == "*") {
                        temp *= operand[++j];
                    } else if (operator_[j + 1] == "/") {
                        temp /= operand[++j];
                    }
                }
            }
            result = temp;
        } else if (operator_[i] == "//") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp += operand[j];
                if (j != operand.size() - 1) {
                    if (operator_[j + 1] == "*") {
                        temp *= operand[++j];
                    } else if (operator_[j + 1] == "//") {
                        temp /= operand[++j];
                    }
                }
            }
            result = temp;
        } else if (operator_[i] == "**") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp += operand[j];
                if (j != operand.size() - 1) {
                    if (operator_[j + 1] == "*") {
                        temp *= pow(operand[++j], 2);
                    } else if (operator_[j + 1] == "**") {
                        temp = pow(operand[++j], temp);
                    }
                }
            }
            result = temp;
        }
    }
    return result;
}