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
    int number = 0;
    int result = 0;
    if (s.empty()) {
        return result;
    }
    
    for (char c : s) {
        if (!isdigit(c)) continue;
        number *= 10;
        number += c - '0';
        if (!isdigit(c) && c != '.') {
            result += ((c == '+') ? 1 : ((c == '-') ? -1 : 0)) * number;
            number = 0;
        }
    }
    
    return result;
}