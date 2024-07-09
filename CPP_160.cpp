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
                if (operator_[j] == "*")
                    temp *= operand[j];
                else
                    break;
            }
            result += temp;
        } else if (operator_[i] == "//") {
            int temp = 0;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "//")
                    temp /= operand[j];
                else
                    break;
            }
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "**")
                    temp *= pow(operand[j], 1.0);
                else
                    break;
            }
            result += temp;
        }
    }
    return result;
}