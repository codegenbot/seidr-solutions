#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int stack_size = 0;
    bool is_good = true;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                stack_size++;
            } else if (c == ')') {
                if (stack_size <= 0) {
                    is_good = false;
                    break;
                }
                stack_size--;
            }
        }
    }

    return is_good ? "Yes" : "No";
}

int main() {
    std::vector<std::string> lst = {")", "("};
    std::cout << match_parens(lst) << std::endl;
    
    return 0;
}