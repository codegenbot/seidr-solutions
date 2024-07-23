#include <vector>

using namespace std;

bool correct_bracketing(string brackets) {
    vector<char> stack;
    for (char bracket : brackets) {
        if (bracket == '(') {
            stack.push_back(bracket);
        } else if (bracket == ')') {
            if (stack.empty()) return false;
            stack.pop_back();
        }
    }
    return stack.empty();
}