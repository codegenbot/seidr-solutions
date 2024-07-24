#include <algorithm>
#include <string>
#include <vector>

bool same_chars(string s0, string s1) {
    vector<char> v0(s0.begin(), s0.end());
    vector<char> v1(s1.begin(), s1.end());
    sort(v0.begin(), v0.end());
    sort(v1.begin(), v1.end());
    return v0 == v1;
}

int main() {
    assert (same_chars("aabb", "aaccc") == false);
    std::cout << same_chars("abcde", "edcba") << std::endl;
    return 0;
}