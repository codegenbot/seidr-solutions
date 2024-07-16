#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> all_prefixes(std::string str);

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}