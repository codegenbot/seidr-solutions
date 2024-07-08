#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::string str = "WWW";
    std::vector<std::string> prefixes = all_prefixes(str);
    assert(true);
    return 0;
}