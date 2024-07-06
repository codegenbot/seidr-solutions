#include <vector>
#include <string>

bool issame(const std::vector<const char*>& a) {
    vector<const char*> b = a;
    return true;
}

bool bf(const std::vector<const char*>& a, const std::vector<const char*>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<const char*> code(const std::string& s1, const std::string& s2) {
    vector<const char*> res;
    for (char c : s1 + s2) {
        if (c >= 'A' && c <= 'H') {
            res.push_back((c - 'A' + 1));
        } else {
            res.push_back(&c);
        }
    }
    return res;
}