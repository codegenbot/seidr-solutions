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

int main(){
    std::vector<std::string> test_strings = {"apple", "banana", "apricot", "cherry"};
    std::string test_prefix = "ap";
    std::vector<std::string> filtered_strings = filter_by_prefix(test_strings, test_prefix);

    std::vector<std::string> expected_result = {"apple", "apricot"};
    assert(issame(filtered_strings, expected_result));

    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    return 0;
}