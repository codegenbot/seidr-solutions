int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operator_[i] + " ";
            expression += to_string(operand[i]);
        }
    }
    
    // Evaluate the expression
    int temp = 0;
    for (int i = 0; i < expression.size(); i++) {
        if (isdigit(expression[i])) {
            temp *= 10;
            temp += expression[i] - '0';
        } else {
            if (expression[i] == '+') {
                result += temp;
                temp = 0;
            } else if (expression[i] == '-') {
                result -= temp;
                temp = 0;
            } else if (expression[i] == '*') {
                result *= temp;
                temp = 0;
            } else if (expression[i] == '/') {
                result /= temp;
                temp = 0;
            } else if (expression[i] == '**') {
                result = pow(result, temp);
                temp = 0;
            }
        }
    }
    
    // Add the last operand
    result += temp;
    
    return result;
}