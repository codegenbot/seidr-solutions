#include <string>
#include <assert.h>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') count++;
        else if (count > 0) count--;
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))()"));
    return 0;
}