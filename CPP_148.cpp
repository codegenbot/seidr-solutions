```cpp
#include <vector>
#include <string>

std::vector<std::string> bf(std::string s1, std::string s2) {
    return {s1, s2};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> b = bf("Jupiter", "Makemake");
    std::cout << "Output: " << (issame(b, {}) ? "true" : "false") << std::endl;
}