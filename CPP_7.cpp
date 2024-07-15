#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool have_same_elements(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}

int main(){
    assert(have_same_elements(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}