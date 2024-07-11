int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    int temp = operand[0];
    for (int i = 1; i < operand.size(); i++) {
        if (*min_element(operato.begin(), operato.end()) == "+") {
            result += temp + operand[i];
        } else if (*min_element(operato.begin(), operato.end()) == "-") {
            result -= temp - operand[i];
        } else if (*min_element(operato.begin(), operato.end()) == "*") {
            result *= temp * operand[i];
        } else if (*min_element(operato.begin(), operato.end()) == "//") {
            result = temp / (int)round((double)operand[i]);
        } else if (*min_element(operato.begin(), operato.end()) == "**") {
            result = pow(temp, operand[i]);
        }
        operato.erase(min_element(operato.begin(), operato.end()));
    }
    return result;
}