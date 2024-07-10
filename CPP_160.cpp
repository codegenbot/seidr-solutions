int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for (int i = 0; i < operator_.size(); i++) {
        if (i > 0) {
            expression += " ";
        }
        
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    
    // Evaluate the expression
    result = eval(expression.c_str());
    
    return result;
}

int eval(char* s) {
    int x, y;
    char op;

    while (sscanf(s, "%d %c", &x, &op) == 2) {
        s++;
        if (*s == '(') {
            y = eval(++s);
            s++;
        } else {
            sscanf(s, "%d", &y);
        }
        switch (op) {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                printf("Error: Unknown operator %c\n", op);
                exit(1);
        }
    }
    return x;
}