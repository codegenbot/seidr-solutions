#include <iostream>
#include <vector>
#include <algorithm>

bool correct_bracketing(const std::string& s) {
    int count = 0;
    for (char bracket : std::vector<char>(s.begin(), s.end())) {
        if (bracket == '<') {
            count++;
        } else if (bracket == '>') {
            if (count <= 0)
                return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(not correct_bracketing("<><><<><>><>>><"));
    return 0;
}