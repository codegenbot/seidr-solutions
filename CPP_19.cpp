#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cassert>

std::map<std::string, int> number_map = {
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

std::string sort_numbers(std::string numbers){
    std::vector<std::string> num_list;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token) {
        num_list.push_back(token);
    }
    std::sort(num_list.begin(), num_list.end(), [&](const std::string &a, const std::string &b) {
        return number_map[a] < number_map[b];
    });
    std::string result = "";
    for (const auto &num : num_list) {
        result += num + " ";
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}