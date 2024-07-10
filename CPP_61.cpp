#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for(int i=0; i< brackets.length(); i++){
        if(brackets[i] == '(') {
            count++;
        } else if (brackets[i] == ')') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter brackets: ";
    std::cin >> input;
    assert(not correct_bracketing(input));
    return 0;
}