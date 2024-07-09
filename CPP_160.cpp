int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    string expression = "";
    for (int i = 0; i < operato.size(); i++) {
        if (i > 0) {
            expression += " ";
        }
        expression += std::to_string(operand[i]);
        expression += operato[i];
    }
    expression += std::to_string(operand.back());
    
    int temp = eval(expression);
    return temp;
}

int eval(const string &s) {
    int x = 0, y = 0;
    char op = '+';
    for (char c : s) {
        if (isdigit(c)) {
            if (op == '+') {
                x = 0;
                y = 0;
            }
            else if (op == '-') {
                x = y;
                y = 0;
            }
            else if (op == '*') {
                x *= y;
                y = 0;
            }
            else if (op == '/') {
                x /= y;
                y = 0;
            }
            else if (op == '**') {
                x = pow(x, y);
                y = 0;
            }
            y = y * 10 + (c - '0');
        }
        else {
            op = c;
        }
    }
    return x;
}