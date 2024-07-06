```c++
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const char* str) {
    std::vector<std::string> prefixes;
    for(int i = 0; i <= strlen(str); i++) {
        prefixes.push_back(std::string(str, 0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) return false;
    return true;
}