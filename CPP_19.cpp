#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cassert>

std::map<std::string, int> num_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

std::string sort_numbers(std::string numbers);

std::string sort_numbers(std::string numbers){
    std::map<int, std::string> rev_map;
    for (auto const& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    std::vector<int> nums;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token) {
        nums.push_back(num_map[token]);
    }

    std::sort(nums.begin(), nums.end());

    std::string result;
    for (int num : nums) {
        result += rev_map[num] + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}