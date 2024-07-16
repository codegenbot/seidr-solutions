#include <string>
#include <vector>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<std::string> all_prefixes(std::string str);

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}