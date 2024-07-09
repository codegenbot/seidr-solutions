string do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int result = stoi(eval(expression));
    
    return result;
}

string eval(const string& s) {
    string temp = "";
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            temp += s[i];
        } else if (s[i] == '+') {
            int num = stoi(temp);
            temp = "";
            result += num;
        } else if (s[i] == '-') {
            int num = stoi(temp);
            temp = "";
            result -= num;
        }
    }
    int num = stoi(temp);
    return to_string(num);