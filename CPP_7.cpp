#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace std {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
        if(a.size() != b.size()){
            return false;
        }
        for(size_t i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring){
    std::vector<std::string> filtered_strings;
    for(const std::string& str : strings){
        if(str.find(substring) != std::string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    std::vector<std::string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
    std::string substring = "an";
    
    std::vector<std::string> expected_filtered_strings = {"banana", "orange"};
    
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);
    
    assert(std::issame(filtered_strings, expected_filtered_strings));
    
    assert(std::issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    std::cout << "All tests passed" << std::endl;
    
    return 0;
}