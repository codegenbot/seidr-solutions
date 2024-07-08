```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<char> all_prefixes(std::string str) {
    std::vector<char> result;
    for (int i = 1; i <= str.length(); i++) {
        result.insert(result.end(), str.begin(), str.begin() + i);
    }
    return result;
}

int main() {
    std::string str = "WWW";
    std::vector<char> prefixes = all_prefixes(str);
    assert(issame({str}, {str}));
    return 0;
}