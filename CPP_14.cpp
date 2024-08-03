#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::vector<std::string> prefixes = all_prefixes(str);

    for (const auto &prefix : prefixes) {
        std::cout << prefix << " ";
    }
    std::cout << "\n";

    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));

    return 0;
}