#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using string = std::basic_string<char>;

bool issame(const std::vector<string>& a, const std::vector<string>& b){
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

std::vector<string> filter_by_substring(const std::vector<string>& strings, const string& substring){
    std::vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != std::string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    std::vector<string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
    string substring = "an";
    
    std::vector<string> expected_filtered_strings = {"banana", "orange"};
    
    std::vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    assert(issame(filtered_strings, expected_filtered_strings));
    
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    std::cout << "All tests passed" << std::endl;
    
    return 0;
}