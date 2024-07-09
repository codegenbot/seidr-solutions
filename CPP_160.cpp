```cpp
#include <vector>
#include <string>
#include <cstdlib>

int do_algebra(vector<string> operators, vector<int> operands) {
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
            result += sign * std::atoi(&s[i]);
        }
    }
    
    return result;
}

int main() {
    vector<string> operators = {"//", "*"};
    vector<int> operands = {7, 3, 4};
    int result = do_algebra(operators, operands);
    assert(result == 8); // test the function
    return 0;
}