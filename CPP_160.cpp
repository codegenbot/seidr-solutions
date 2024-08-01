int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int temp = operand[0];
    
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += temp + operand[i];
        } else if (*operator_.begin() == "-") {
            result -= temp - operand[i];
        } else if (*operator_.begin() == "*") {
            result *= temp * operand[i];
        } else if (*operator_.begin() == "//") {
            result = temp / (operand[i] + 0.0);
        } else if (*operator_.begin() == "**") {
            result = pow(temp, operand[i]);
        }
        
        operator_.erase(operator_.begin());
    }
    
    return result;
}