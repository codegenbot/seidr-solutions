#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;

}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size()) return false;
    for(auto s : a) if(std::find(b.begin(),b.end(),s) == b.end()) return false;
    return true;
}