#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> bf(std::string a, std::string b) {
    return {a, b};
}

int main() {
    std::cout << "Output: " << (issame(bf("Jupiter", "Makemake"), {}) ? "True" : "False") << std::endl; 
}