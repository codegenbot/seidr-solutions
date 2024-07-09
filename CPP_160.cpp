```cpp
#include <cstdlib>
#include <vector>
#include <string>

int do_algebra(vector<int> operand_, vector<string> operator_) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand_[i]);
        expression += operator_[i];
    }
    expression += to_string(operand_.back());
    
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
        if (!isdigit(s[i])) {
            if (s[i] == '+') {
                sign = 1;
            } else if (s[i] == '-') {
                sign = -1;
            }
            start = i + 1;
        } else {
            result += sign * std::atoi(std::string(1, s[i]).c_str());
        }
    }
    
    return result;
}

int main() {
    vector<int> oper = {7, 3, 4};
    vector<string> op = {"//", "*"};
    int result = do_algebra(oper, op);
    return 0;
}