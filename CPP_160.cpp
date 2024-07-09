```cpp
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

std::vector<string> ops = {"//", "*"};

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += " ";
        expression += std::operator_[i];
    }
    expression += " " + to_string(operand.back());
    
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
            result += sign * stoi(string(1, s[i]).c_str());
        }
    }
    
    return result;
}

int main() {
    int result = do_algebra(ops, {7, 3, 4});
    return 0;
}