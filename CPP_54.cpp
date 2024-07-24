#include <algorithm>
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    return 0;
}