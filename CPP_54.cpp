#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    if (s0.length() != s1.length()) {
        return false;
    }

    int charCount[256] = {0};
    for (char c : s0) {
        charCount[c]++;
    }
    for (char c : s1) {
        charCount[c]--;
    }

    for (int count : charCount) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}