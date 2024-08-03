#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (size_t i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    return a == b;
}

int main(){
    assert(issame(all_prefixes("WWW"), std::vector<std::string>{"W", "WW", "WWW"}));
    
    return 0;
}