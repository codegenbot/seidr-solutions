```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false; 
    for (int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}