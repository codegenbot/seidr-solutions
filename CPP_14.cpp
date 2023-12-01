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

int main() {
    assert(all_prefixes("WWW") == std::vector<std::string>{"W", "WW", "WWW"});
    std::cout << "Test cases passed." << std::endl;
    return 0;
}