#include <iostream>
#include <string>

int correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))"));
    std::cout << "Correct bracketing\n";
    return 0;
}