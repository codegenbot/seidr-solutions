#include <cstdlib>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> ops = { "//", "*" }; 

int do_algebra(std::vector<std::string> operators, std::vector<int> operands) {
    std::string expression = "";
    for (int i = 0; i < operators.size(); i++) {
        expression += to_string(operands[i]);
        expression += operators[i];
    }
    expression += to_string(operands.back());
    
    int result = eval(expression);
    
    return result;
}

int eval(const std::string& s) {
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
    assert(result == 28);
    return 0;
}