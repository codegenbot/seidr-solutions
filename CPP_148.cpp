#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    return {{str1}, {str2}};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int check() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}