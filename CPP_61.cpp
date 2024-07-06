#include <string>

int correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') count++;
        else if (c == ')') {
            if (count > 0) count--;
            else return 0; // Return 0 if there are more closing than opening
        }
    }
    if (count != 0) return 0; // If there are still open brackets, it's incorrect
    return 1; // All brackets were correct
}