#include <iostream>
#include <cassert>

bool is_nested(const std::string& str) {
    int balance = 0;
    for(char c : str) {
        if(c == '[') {
            balance++;
        } else if(c == ']' && balance > 0) {
            balance--;
        }
    }
    return balance == 0;
}

int main() {
    assert(is_nested("[]") == true);
    assert(is_nested("[[[]]]") == true);
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}