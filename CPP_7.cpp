#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (!std::equal(a.begin(), a.end(), b.begin(), [](const auto& x, const auto& y) { return x == y; })) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos && !issame({str}, {substring})){
            result.push_back(str);
        }
    }
    return result;
}