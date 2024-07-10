#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cassert>

std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

std::string sort_numbers(std::string numbers) {
    std::vector<std::string> num_strings;
    std::stringstream ss(numbers);
    std::string token;
    
    while (ss >> token) {
        num_strings.push_back(token);
    }
    
    std::sort(num_strings.begin(), num_strings.end(), [&](const std::string &a, const std::string &b) {
        return num_map[a] < num_map[b];
    });
    
    std::string result;
    for (const auto &num_str : num_strings) {
        result += num_str + " ";
    }
    
    return result;
}