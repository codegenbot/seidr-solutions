#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    std::string input_brackets;
    std::cin >> input_brackets;
    
    assert(correct_bracketing(input_brackets));
  
    return 0;
}