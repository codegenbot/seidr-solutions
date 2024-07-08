```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    bool issame(vector<string> a,vector<string>b){
        for(auto str : a) {
            if (find(b.begin(), b.end(), str) == b.end()) 
                return false;
        }
        return true;
    };
    for(auto str : strings){
        if(str.find(substring) != std::string::npos && issame({str}, result))
            result.push_back(str);
    }
    return result;
}