#include <string>
#include <vector>

bool issame(std::string str1, std::string str2){
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