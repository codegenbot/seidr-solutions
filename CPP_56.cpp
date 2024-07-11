#include <iostream>
#include <vector>

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
    std::cout << correct_bracketing("<<>");
    return 0;
}