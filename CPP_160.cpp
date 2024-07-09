int do_algebra(vector<string> operato, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operato.size(); i++) {
        expression += to_string(operand[i]);
        expression += operato[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression);
    
    return result;
}

long long eval(const string& s) {
    long long x = 0, y = 0;
    for (char c : s) {
        if (isdigit(c)) {
            if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0') {
                y = y * 10 + (c - '0');
            }
        } else if (c == '+') {
            x += y;
            y = 0;
        } else if (c == '-') {
            x -= y;
            y = 0;
        } else if (c == '*') {
            long long t = x;
            x = y;
            y = t * y;
        } else if (c == '/') {
            long long t = x;
            x = y;
            y = t / y;
        }
    }
    return x + y;
}