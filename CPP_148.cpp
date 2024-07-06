```cpp
#include <vector>
#include <string>

bool bf(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::cout << "Output: " << bf({"Jupiter", "Makemake"}, {"J2U5P3T3R", "M1K3M4K3"}) << std::endl;
}