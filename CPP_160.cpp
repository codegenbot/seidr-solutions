int do_algebra(vector<string> operator_, vector<int> operand) {
    string expr = "";
    for (int i = 0; i < operator_.size(); i++) {
        expr += to_string(operand[i]);
        expr += operator_[i];
    }
    expr += to_string(operand.back());
    
    int result = eval(expr.c_str());
    
    return result;
}

long long eval(const char *s) {
    int n = strlen(s);
    long long res = 0;
    long long a = 0, b = 1;
    int i = 0;
    while (i < n) {
        if (isdigit(s[i])) {
            long long c = 0;
            while (i < n && isdigit(s[i]))
                c = c * 10 + s[i++] - '0';
            a += c * b;
        } else if (s[i] == ' ') {
            i++;
            continue;
        } else if (s[i] in "+-*/") {
            res += a;
            a = 0;
            switch (s[i++]) {
                case '+':
                    break;
                case '-':
                    b = -b;
                    break;
                case '*':
                    b *= a;
                    a = 0;
                    break;
                case '/':
                    b = div(a, b);
                    a = 0;
                    break;
            }
        }
    }
    res += a;
    return res;
}