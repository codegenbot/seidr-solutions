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

long long eval(const char* pExpr) {
    char expr[1024];
    strcpy(expr, pExpr);
    return eval(expr);
}

long long eval(char* pExpr) {
    long long v = 0;
    while (*pExpr) {
        if (isdigit(*pExpr)) {
            int i = 0;
            while (isdigit(pExpr[i])) i++;
            v = v * 10 + (pExpr[i] - '0');
            for (; pExpr[i]; i++) pExpr[i] = ' ';
        } else if (*pExpr == '(') {
            long long x = eval(++pExpr);
            pExpr += strcspn(pExpr, ")");
            v = v * 10 + (x % 10);
            v /= 10;
        } else if (*pExpr == '.') {
            long long x = eval(++pExpr);
            pExpr += strcspn(pExpr, ".");
            v = v * 10 + (x % 10);
            v /= 10;
        } else {
            pExpr++;
        }
    }
    return v;
}