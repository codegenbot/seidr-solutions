#include <string>
#include <algorithm>

int solve(std::string s) {
    for (char &c : s) {
        c = std::tolower(c);
    }
    return s.length();
}

int main() {
    assert(solve("#ccc") == 3);
    return 0;
}