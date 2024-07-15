#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert((filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}