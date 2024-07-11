int do_algebra(vector<string> operators, vector<int> operand) {
    int result = 0;
    int temp = operand[0];
    for (int i = 1; i < operand.size(); i++) {
        if (*min_element(operators.begin(), operators.end()) == "+") {
            result += temp + operand[i];
        } else if (*min_element(operators.begin(), operators.end()) == "-") {
            result -= temp - operand[i];
        } else if (*min_element(operators.begin(), operators.end()) == "*") {
            result *= temp * operand[i];
        } else if (*min_element(operators.begin(), operators.end()) == "//") {
            result = temp / (int)round((double)operand[i]);
        } else if (*min_element(operators.begin(), operators.end()) == "**") {
            result = pow(temp, operand[i]);
        }
        operators.erase(min_element(operators.begin(), operators.end()));
    }
    return result;
}