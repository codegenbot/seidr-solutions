```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size()) 
        return false;
    for(int i = 0; i < v1.size(); i++) 
        if(v1[i] != v2[i]) 
            return false;
    return true;
}

vector<string> filter_by_substring(vector<string> strs, string substr) {
    vector<string> filtered;
    for(const auto &s : strs)
        if(s.find(substr) != std::string::npos)
            filtered.push_back(s);
    return filtered;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}