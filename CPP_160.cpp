int do_algebra(vector<string> operator, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator.size(); i++) {
        if (operator[i] == "+") {
            result += operand[i];
        } else if (operator[i] == "-") {
            result -= operand[i];
        } else if (operator[i] == "*") {
            int temp = 1;
            for (int j = 0; j <= i; j++) {
                temp *= operand[j];
            }
            result += temp;
        } else if (operator[i] == "/*" || operator[i] == "//") {
            int temp = operand[i - 1] / operand[i];
            result += temp;
        } else if (operator[i] == "**") {
            int temp = 1;
            for (int j = 0; j < operand[i]; j++) {
                temp *= operand[0];
            }
            result += temp;
        }
    }
    return result;
}