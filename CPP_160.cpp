int do_algebra(vector<string> operato, vector<int> operand) {
    string expression;
    for (int i = 0; i < operato.size(); ++i) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operato[i] + " ";
            expression += to_string(operand[i]) + " ";
        }
    }
    int result = eval(expression.c_str());
    return result;
}

long long eval(char* s) {
    long long x = 0, y = 1;
    while (*s) {
        if (isdigit(*s)) {
            x = x * 10 + (*s - '0');
            while (*(s + 1) && isdigit(*(s + 1))) {
                s++;
            }
        } else if (*s == 'p') {
            y *= x;
            s++;
        } else if (*s == 'd') {
            y /= x;
            s++;
        } else if (*s == '+') {
            y = x + 1;
            s++;
        } else if (*s == '-') {
            y = x - 1;
            s++;
        }
    }
    return y;
}