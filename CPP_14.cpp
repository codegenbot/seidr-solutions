#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str);

bool issame(std::vector<std::string> a, std::vector<std::string> b);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    
    return 0;
}