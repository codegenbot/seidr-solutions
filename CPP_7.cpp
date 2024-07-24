#include <vector>
#include <string>

namespace problem7 {
    std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
        std::vector<std::string> result;
        for(string s : strings){
            if(s.find(substring) != std::string::npos){
                result.push_back(s);
            }
        }
        return result;
    }
}