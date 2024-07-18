#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for(int i = 1; i <= str.size(); i++){
        result.push_back(str.substr(0, i));
    }
    return result;
}