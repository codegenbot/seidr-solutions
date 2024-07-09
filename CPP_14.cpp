```cpp
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& vec) {  
    const std::vector<std::string> expected = {"W", "WW", "WWW"};
    return vec.size() == expected.size() && std::equal(vec.begin(), vec.end(), expected.begin());
}

int main() {
    assert(issame(all_prefixes("WWW")));
    return 0;
}