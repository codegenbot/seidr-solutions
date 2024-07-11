```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 0; i < str.size(); ++i) {
        std::string prefix(str.substr(0, i));
        result.push_back(prefix);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::string str = "WWW";
    if (!issame(all_prefixes(str), {"W", "WW", "WWW"})) {
        std::cout << "Error: Expected prefixes are not the same." << std::endl;
    } else {
        std::cout << "Test passed!" << std::endl;
    }
    return 0;
}