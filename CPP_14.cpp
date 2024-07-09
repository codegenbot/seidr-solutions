```cpp
#ifndef __cpp_initializer_lists
#define __cpp_initializer_lists 201304
#endif

#include <set>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result = {"", };
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool main() {
    const std::string str = "WWW";
    assert(issame(all_prefixes(str), {"W", "WW", "WWW"}));
    return 0;
}