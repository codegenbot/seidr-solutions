#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    return {str1 + " " + str2};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == 1 && b.size() == 1 && a[0] == b[0];
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {"Jupiter Makemake"}));
    return 0;
}