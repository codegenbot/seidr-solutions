#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> bf(const std::string& planet1, const std::string& planet2) {
    // Function implementation remains the same.
}

int main() {
    assert (issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}