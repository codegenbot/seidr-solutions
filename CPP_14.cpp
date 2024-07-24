#include <string>
#include <vector>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> all_prefixes(std::string str);

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> prefixes;
    std::string prefix = "";
    
    for (char ch : str) {
        prefix += ch;
        prefixes.push_back(prefix);
    }
    
    return prefixes;
}