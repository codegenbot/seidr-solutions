```cpp
#include <vector>
#include <string>

bool bf(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<std::string> a) {
    return true;
}

int main() {
    std::cout << "Output: " << bf({"Jupiter", "Makemake"}, {}) << std::endl;
    assert(bf({"Jupiter", "Makemake"}, {}) == std::vector<std::string>());
}