#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    // Sample test cases
    assert(correct_bracketing("()") == true);
    assert(correct_bracketing("((( )))") == false);
    assert(correct_bracketing("() () (()())()) ) ()") == false);
    assert(correct_bracketing("(()(()))") == true);
    assert(correct_bracketing(")()(") == false);
    assert(correct_bracketing("(((()))())") == true);

    // Check empty input
    assert(correct_bracketing("") == true);

    // Check invalid bracketing
    assert(correct_bracketing("(((") == false);
    assert(correct_bracketing(")))") == false);

    // Check unbalanced bracketing
    assert(correct_bracketing("()(") == false);
    assert(correct_bracketing("())()(") == false);
    
    // Check valid bracketing with other characters
    assert(correct_bracketing("(hello(world))") == true);
    assert(correct_bracketing("(hello(world)))") == false);

    // Additional test cases
    assert(!(correct_bracketing("()()(()())()))()")));

    return 0;
}