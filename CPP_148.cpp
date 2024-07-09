#include <vector>
#include <string>
#include <utility>

std::pair<std::string, std::string> bf(const std::string& str1, const std::string& str2) {
    return {str1, str2};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<std::string>(bf("Jupiter", "Makemake").first), {}));
    return 0;
}