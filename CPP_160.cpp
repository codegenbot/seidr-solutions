int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        if (i < operator_.size() - 1) {
            expression += " " + operator_[i] + " ";
        }
    }
    expression += to_string(operand[operator_.size()]);
    
    int result = eval(expression.c_str());
    return result;
}

int eval(char* str) {
    int result = 0;
    char *p = strtok(str, "+-*/");
    while (p != NULL) {
        if (*p == ' ') {
            p++;
            continue;
        }
        if (*p == '+') {
            result += atoi(p + 1);
        } else if (*p == '-') {
            result -= atoi(p + 1);
        } else if (*p == '*') {
            int temp = 0;
            while (isdigit(*p)) {
                temp = temp * 10 + *p - '0';
                p++;
            }
            result *= temp;
        } else if (*p == '/') {
            int temp = 0;
            while (isdigit(*p)) {
                temp = temp * 10 + *p - '0';
                p++;
            }
            result /= temp;
        } else if (*p == '^') {
            int temp = 0;
            while (isdigit(*p)) {
                temp = temp * 10 + *p - '0';
                p++;
            }
            result = pow(result, temp);
        }
        p = strtok(NULL, "+-*/");
    }
    return result;
}