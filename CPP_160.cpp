#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

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
        if (!ispunct(s[i])) {
            if (s[start + i - 1] == '+') {
                sign = 1;
            } else if (s[start + i - 1] == '-') {
                sign = -1;
            }
            start = i + 1;
        } else {
            result += sign * stoi(s.substr(start, 1));
            start = i + 1;
        }
    }
    
    return result;
}