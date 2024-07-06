```cpp
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for(int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& B) {
    if(a.size() != B.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != B[i]) return false;
    return true;
}