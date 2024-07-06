#include <vector>
#include <string>

std::vector<std::vector<std::string>> all_prefixes(const std::string& str) {
    std::vector<std::vector<std::string>> result;
    for(int i = 0; i <= str.size(); i++) {
        std::vector<std::string> prefix;
        for(int j = 0; j <= i; j++) {
            prefix.push_back(str.substr(0, j + 1));
        }
        result.push_back(prefix);
    }
    return result;
}

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(!issame(a[i], b[i])) return false;
    return true;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) return false;
    return true;
}