#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<string> b){
    return a==b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(toLower(s));
    }
    return result;

}

std::string toLower(const std::string& str){
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
                   ::tolower);
    return lowerStr;
}