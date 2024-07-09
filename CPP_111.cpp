```
#include <map>
#include <string>

namespace std {
std::map<char, int> histogram(const std::string& s) {
    std::map<char, int> result;
    for (char c : s) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}
}