#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return true;
}

bool bf(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> code(const std::string& s1, const std::string& s2) {
    std::vector<std::string> res;
    for (char c : s1 + s2) {
        if (c >= 'A' && c <= 'H') {
            res.push_back(std::to_string((c - 'A' + 1)));
        } else {
            res.push_back(std::string(1, c));
        }
    }
    return res;
}

int main() {
    assert(bf(code({"Jupiter"}, {"Makemake"}), {}) == std::vector<std::string>({}));
    std::cout << "Output: ";
    
    std::vector<std::string> s1 = {"Jupiter"};
    std::vector<std::string> s2 = {"Makemake"};
    
    if (bf(code(s1, s2), {})) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}