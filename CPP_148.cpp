```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> bf(std::string s1, std::string s2) {
    return {s1, s2};
}

int main() {
    std::cout << "Output: " << issame(bf("Jupiter", "Makemake"), {}) << std::endl;
}