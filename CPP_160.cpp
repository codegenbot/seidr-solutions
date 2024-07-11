int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += operand[i];
        } else if (*operator_.begin() == "-") {
            result -= operand[i];
        } else if (*operator_.begin() == "*") {
            result *= operand[i];
        } else if (*operator_.begin() == "//") {
            result = result / operand[i];
        } else if (*operator_.begin() == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}