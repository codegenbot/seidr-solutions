#include <cstddef>
#include <cassert>

std::string solve(const std::string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }

    size_t i = 0, j = s.size() - 1;
    while (i < j) {
        std::swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}