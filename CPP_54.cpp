#include <cassert>
#include <algorithm>
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string t0 = s0, t1 = s1;
    sort(t0.begin(), t0.end());
    sort(t1.begin(), t1.end());
    return t0 == t1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    return 0;
}