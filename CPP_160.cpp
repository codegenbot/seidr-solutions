int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression);
    
    return result;
}

int eval(const string& s) {
    int result = 0;
    if (s.empty()) {
        return result;
    }
    
    int number = 0;
    for (char c : s) {
        if (!isdigit(c)) continue;
        number *= 10;
        number += c - '0';
        if (!isdigit(c) && c != '.') {
            result += sign * number;
            number = 0;
            sign = (c == '-') ? -1 : 1;
        }
    }
    
    return result;
}