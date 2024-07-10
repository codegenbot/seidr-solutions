int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (*std::prev(operato.end()) == "+") {
            result += operand[i];
        } else if (*std::prev(operato.end()) == "-") {
            result -= operand[i];
        } else if (*std::prev(operato.end()) == "*") {
            result *= operand[i];
        } else if (*std::prev(operato.end()) == "//$") {
            result = result / operand[i];
        } else if (*std::prev(operato.end()) == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}