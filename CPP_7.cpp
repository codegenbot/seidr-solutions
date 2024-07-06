#include <vector>
#include <string>

std::vector<std::string> isSame(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}