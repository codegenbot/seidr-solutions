#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    int stack_size = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') {
                stack_size++;
            } else if (c == ')') {
                if (stack_size == 0) return false; 
                stack_size--;
            }
        }
    }
    return stack_size == 0;
}

int main() {
    std::vector<std::string> lst = {")", "("}; 
    assert(match_parens(lst)); 
}