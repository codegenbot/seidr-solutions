#include <cassert>
#include <string>

bool same_chars(std::string s0, std::string s1) {
    if(s0.length() != s1.length()) {
        return false;
    }
    for(int i = 0; i < s0.length(); i++) {
        if(std::count(s0.begin(), s0.end(), s1[i]) != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    return 0;
}