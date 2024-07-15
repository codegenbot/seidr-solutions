#include <vector>
#include <string>
#include <cassert>

bool are_same(const std::vector<std::string>& v1, const std::vector<std::string>& v2){
    return v1 == v2;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(const std::string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> input = {"apple", "banana", "cherry", "apricot", "pear"};
    std::vector<std::string> expected_output = {"apple", "apricot"};
    
    std::vector<std::string> result = filter_by_prefix(input, "ap");
    
    assert(are_same(result, expected_output));
    
    return 0;
}