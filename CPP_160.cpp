int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        if (i < operator_.size() - 1)
            expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    return result;
}

int eval(const char* expression) {
    int result = 0;
    int sign = 1;
    long long value = 0;
    
    while (*expression != '\0') {
        if (isdigit(*expression)) {
            value = value * 10 + (*expression - '0');
        } else if (*expression == '+') {
            result += sign * value;
            sign = 1;
            value = 0;
        } else if (*expression == '-') {
            result += sign * value;
            sign = -1;
            value = 0;
        } else if (*expression == '(') {
            int i = 1;
            for (; expression[i] != ')'; i++);
            result += eval(expression + 1);
        }
        expression++;
    }
    
    return result + sign * value;
}