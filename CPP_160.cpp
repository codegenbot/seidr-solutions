int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for(int i = 0; i < operator_.size(); i++) {
        if(i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operator_[i] + " ";
            expression += to_string(operand[i]);
        }
    }
    
    int temp = eval(expression.c_str());
    return temp;
}

int eval(char* s) {
    int x = 0, y = 0;
    char op = '+';
    while (*s) {
        if (isdigit(*s)) {
            sscanf(s, "%d%n", &x, &n);
            s += n;
        } else if (*s == '(') {
            s++;
            x = eval(s);
            s++;
            op = '+';
        } else {
            op = *s;
            s++;
        }
    }
    return x;
}