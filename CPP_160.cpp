int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression;
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operator_[i] + " ";
            expression += to_string(operand[i]);
        }
    }

    int result = eval(expression.c_str());
    return result;
}

long long eval(const char *p) {
    long long x = 0, y = 0;
    const char *q = p;
    while (*q) {
        if (isdigit(*q)) {
            int w = 0;
            do {
                w = w * 10 + (*q - '0');
                q++;
            } while (isdigit(*q));
            x = x * 10 + w;
        }
        else if (*q == '+') y = x, x = 0;
        else if (*q == '-') y = x, x = 0;
        else if (*q == '*') x *= y, y = 0;
        else if (*q == '/') {
            x /= y; y = 0;
            if (x < 0 && y > 0) x = -(-x/y);
            else if (x > 0 && y < 0) x = -(-x/-y);
        }
        else q++; // (
    }
    return x;
}