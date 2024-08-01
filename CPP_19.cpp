#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

std::string sort_numbers(const std::string& numbers) {
    std::stringstream ss(numbers);
    std::vector<std::string> vec;
    std::string word;
    
    while (ss >> word) {
        vec.push_back(word);
    }
    
    std::sort(vec.begin(), vec.end());
    
    std::stringstream result;
    for (const auto& w : vec) {
        result << w << " ";
    }
    
    return result.str();
}