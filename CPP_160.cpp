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
    long long x, y;
    while (*p) {
        if (isdigit(*p)) {
            sscanf(p, "%lld", &y);
            p++;
            break;
        }
        p++;
    }
    while (*p) {
        switch (*p) {
            case '+':
                x += y;
                y = 0;
                break;
            case '-':
                x -= y;
                y = 0;
                break;
            case '*':
                x *= y;
                y = 0;
                break;
            case '/':
                x /= y;
                y = 0;
                break;
            case '^':
                x = pow(x, y);
                y = 0;
                break;
        }
        p++;
    }
    return x;
}