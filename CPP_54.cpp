#include <algorithm>
#include <string>

bool same_chars(std::string s0, std::string s1) {
    if (s0.size() != s1.size()) {
        return false;
    }
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    if (same_chars("abcde", "edcba")) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}