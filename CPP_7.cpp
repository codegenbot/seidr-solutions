```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>);

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}