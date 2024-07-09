#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "grape", "orange"};
    std::string prefix = "gr";
    
    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);
    
    std::vector<std::string> expected_result = {"grape"};
    assert(issame(filtered_strings, expected_result));
    
    std::cout << "All tests passed successfully." << std::endl;
    
    return 0;
}