```cpp
#include <string>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(std::string(str.c_str(), i));
    }
    return result;
}

bool test() { 
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"})); 
    return true;
}