#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::vector<std::string>>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(!issame(a[i], b[i])) return false;
    return true;
}