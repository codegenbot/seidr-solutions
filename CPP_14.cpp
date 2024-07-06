```cpp
#include <vector>
#include <string>

std::vector<std::vector<std::string>> all_prefixes(const std::vector<std::string>& strs) {
    std::vector<std::vector<std::string>> prefixes;
    for(const auto& str : strs) {
        std::vector<std::string> vec = {{}};
        for(int i = 0; i <= str.size(); i++) {
            vec.push_back(str.substr(0, i));
        }
        prefixes.push_back(vec);
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) return false;
    return true;
}