int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    
    return result;
}

long long eval(const char *p) {
    return evaluate(p, 0);
}

long long evaluate(const char *p, int pos) {
    while (*p == ' ') p++;
    if (isdigit(*p)) {
        long long x = 0;
        while (isdigit(*p)) {
            x = x * 10 + (*p - '0');
            p++;
        }
        return x;
    }
    if (*p == '(') {
        p++;
        int x = evaluate(p, 0);
        p++;
        return x;
    }
    int prevpos = pos;
    switch (*p) {
        case '+': {
            p++;
            long long x = evaluate(p, 0);
            p++;
            return x;
        }
        case '-': {
            p++;
            long long x = -evaluate(p, 0);
            p++;
            return x;
        }
        case '*': {
            p++;
            long long x = evaluate(p, 0);
            p++;
            return x * evaluate(p, 0);
        }
        case '/': {
            p++;
            long long x = evaluate(p, 0);
            if (x == 0) {
                throw runtime_error("Division by zero");
            }
            p++;
            return (long long)(1.0 / x);
        }
    }
    pos = p - prevpos;
    return 0;
}