```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> filter_by_substring(std::vector<std::string> vec, std::string sub) {
    std::vector<std::string> result;
    for(const auto& str : vec) {
        if(str.find(sub) != std::string::npos)
            result.push_back(str);
    }
    
    return result;
}

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size())
        return false;
    
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    
    return true;
}

int main_function() {
    std::string subInput;
    std::cin >> subInput;
    result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, tolower(subInput));
    assert(issame(result, {"grunt", "prune"}));
    return 0;
}