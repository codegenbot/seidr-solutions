```cpp
#include <initializer_list>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
        result.push_back(str.substr(0, i));
    }
    return result;
}

int test() {
    std::vector<std::string> vec1 = all_prefixes("WWW");
    std::vector<std::string> vec2 = {"W", "WW", "WWW"};
    assert(issame(vec1, vec2));
    return true;
}