```cpp
#include <vector>
#include <string>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(all_prefixes("WWW") == {"W", "WW", "WWW"});
    return 0;
}