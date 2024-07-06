#include <vector>
#include <string>

bool issame(const std::vector<const char*>& a, const std::vector<const char*>& b) {
    if (!a.size() && !b.size()) return true;
    return false;
}

bool bf(const std::vector<const char*>& a, const std::vector<const char*>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (strcmp(a[i], b[i]) != 0) return false;
    }
    return true;
}

std::vector<const char*> code(const std::string& s1, const std::string& s2) {
    std::vector<const char*> res;
    for (char c : s1 + s2) {
        if (c >= 'A' && c <= 'H') {
            res.push_back((c - 'A' + 1) + "0");
        } else {
            res.push_back(&c);
        }
    }
    return res;
}