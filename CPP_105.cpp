#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(const std::vector<int>& input) {
    std::vector<std::string> result;
    std::vector<std::string> mapping = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    for (int num : input) {
        result.push_back(mapping[num - 1]);
    }
    
    return result;
}