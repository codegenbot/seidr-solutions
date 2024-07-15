#include <iostream>
#include <map>
#include <string>
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
    std::string result;
    std::vector<std::string> num_list;
    std::stringstream ss(numbers);
    std::string word;
    
    while (ss >> word) {
        num_list.push_back(word);
    }
    
    std::sort(num_list.begin(), num_list.end(), [&](const std::string& a, const std::string& b){
        return num_map[a] < num_map[b];
    });
    
    for (const std::string& num : num_list) {
        result += num + " ";
    }
    
    return result;
}