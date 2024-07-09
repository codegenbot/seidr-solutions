long long do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    long long result = eval(expression);
    
    return result;
}

long long eval(const string& s) {
    long long result = 0;
    if (s.empty()) {
        return result;
    }
    
    int start = 0, sign = 1;
    for (int i = 0; i < (s.size() - 1); i++) {
        if (!isdigit(s[i])) {
            if (s[i] == '+') {
                sign = 1;
            } else if (s[i] == '-') {
                sign = -1;
            }
            start = i + 1;
        } else {
            while (i < s.size() && isdigit(s[i])) {
                result += sign * (s[i] - '0');
                i++;
            }
        }
    }
    
    return result;
}