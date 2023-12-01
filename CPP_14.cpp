#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<std::string> prefixes = all_prefixes("WWW");
    std::vector<std::string> expected = {"W", "WW", "WWW"};

    if (issame(prefixes, expected)) {
        std::cout << "Test cases passed." << std::endl;
    } else {
        std::cout << "Test cases failed." << std::endl;
    }

    return 0;
}