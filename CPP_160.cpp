#include <cstdlib>
#include <vector>
#include <string>

std::vector<std::string> ops = { "//", "*" }; 

int do_algebra(std::vector<string> operators, vector<int> operands) {
    string expression = "";
    for (int i = 0; i < operators.size(); i++) {
        expression += to_string(operands[i]);
        expression += operators[i];
    }
    expression += to_string(operands.back());
    
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
    int result = do_algebra(ops, {7, 3, 4});
    return 0;
}