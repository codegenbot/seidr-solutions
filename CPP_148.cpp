```cpp
#include <initializer_list>
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

std::vector<std::string> code(const std::initializer_list<std::string>& list) {
    std::vector<std::string> result(list);
    return result;
}

int main() {
    std::cout << "Output: " << (bf(code({"Jupiter", "Makemake"}), {}) ? "1" : "0") << std::endl;
    assert(bf(code({"Jupiter", "Makemake"}), {}) == {});
}