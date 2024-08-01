int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int temp = operand[0];
    
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += temp + operand[i];
            temp = result;
            operator_.erase(operator_.begin());
        } else if (*operator_.begin() == "-") {
            result -= temp - operand[i];
            temp = result;
            operator_.erase(operator_.begin());
        } else if (*operator_.begin() == "*") {
            result *= temp * operand[i];
            temp = result;
            operator_.erase(operator_.begin());
        } else if (*operator_.begin() == "//") {
            result /= static_cast<int>(temp / (double)operand[i]);
            temp = result;
            operator_.erase(operator_.begin());
        } else if (*operator_.begin() == "**") {
            result = pow(temp, operand[i]);
            temp = result;
            operator_.erase(operator_.begin());
        }
    }
    
    return temp;
}