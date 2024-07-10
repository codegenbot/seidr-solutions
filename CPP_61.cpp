#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for(int i=0; i<std::string(brackets).length(); i++){
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
    assert(not correct_bracketing("()()(()())()))()"));
    // ...
}