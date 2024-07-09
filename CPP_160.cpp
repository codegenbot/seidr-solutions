#include <cstdlib>
#include <vector>
#include <string>

std::vector<std::string> ops = {"//", "*"};

int do_algebra(std::vector<std::string> operator_, std::vector<std::string> operand_strs) {
    std::string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += operand_strs[i];
        expression += operator_[i];
    }
    expression += operand_strs.back();
    
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
            result += sign * std::stoi(s.substr(start, i - start));
        }
    }
    
    return result;
}

int main() {
    int result = do_algebra(ops, {"7", "3", "4"});
    return 0;
}