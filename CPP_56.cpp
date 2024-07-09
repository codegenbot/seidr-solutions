#include <cassert>
#include <string>

bool correct_bracketing(const std::string& str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '<') count++;
        else if (str[i] == '>') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("<><><<><>><>>><"));
    std::string brackets = "<<>";
    if(correct_bracketing(brackets)) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}