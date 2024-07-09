```cpp
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
    
    int start = 0, sign = 1;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (!isdigit(c)) {
            if (c == '+') {
                sign = 1;
            } else if (c == '-') {
                sign = -1;
            }
            start = i + 1;
        } else if (i == s.size() - 1) {
            result += sign * (c - '0');
        } else if (!isdigit(s[i+1])) {
            result += sign * (c - '0');
            i++;
        }
    }
    
    return result;
}