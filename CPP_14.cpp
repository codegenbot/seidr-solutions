#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if(vec1.size() != vec2.size()) {
        return false;
    }
    for(int i = 0; i < vec1.size(); i++) {
        if(vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    std::cout << "Test cases passed." << std::endl;
    return 0;
}