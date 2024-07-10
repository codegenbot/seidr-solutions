int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (operato[i-1] == "+") {
            result += operand[i];
        } else if (operato[i-1] == "-") {
            result -= operand[i];
        } else if (operato[i-1] == "*") {
            result *= operand[i];
        } else if (operato[i-1] == "//") {
            result = result / operand[i];
        } else if (operato[i-1] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}