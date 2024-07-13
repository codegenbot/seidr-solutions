int do_algebra(vector<string> operato, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operato.size(); i++) {
        expression += to_string(operand[i]);
        expression += operato[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    
    return result;
}

long long eval(const char *s) {
    long long x = 0, y = 1;
    while (*s) {
        if (isdigit(*s)) {
            x = x * 10 + *s - '0';
        } else if (*s == '(') {
            y = eval(&s[1]);
            s += strlen(")") + 1;
            x *= y;
        } else if (*s in "+-*/") {
            if (*s == '+') y++;
            else if (*s == '-') y--;
            else if (*s == '*') x *= y;
            else x /= y;
            s++;
        }
    }
    return x;
}