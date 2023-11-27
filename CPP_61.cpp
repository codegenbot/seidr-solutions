#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (int i = 0; i < brackets.length(); i++) {
        if (brackets[i] == '(') {
            count++;
        }
        else if (brackets[i] == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

// int main() {
//     if (!correct_bracketing("()()(()())()))()")) {
//         std::cout << "Test case failed!" << std::endl;
//     }
//     else {
//         std::cout << "All test cases passed!" << std::endl;
//     }
// }