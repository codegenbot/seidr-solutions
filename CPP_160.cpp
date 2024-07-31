int do_algebra(vector<string> operator_vec, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_vec.size(); ++i) {
        if (operator_vec[i] == "+") {
            result += operand[i + 1];
        } else if (operator_vec[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_vec[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_vec[i] == "//") {
            result /= operand[i + 1];
        } else if (operator_vec[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}