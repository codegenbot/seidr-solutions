#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& str1, const std::string& str2) {
    return {{str1}, {str2}};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    if (!issame(bf("Jupiter", "Makemake"), bf("Jupiter", "Makemake"))) {
        return 1; 
    }
    return 0;
}