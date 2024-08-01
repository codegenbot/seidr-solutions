#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string> 

std::string sort_numbers(std::string numbers);

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::cout << sort_numbers(input) << std::endl;
    
    return 0;
}

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

std::string sort_numbers(std::string numbers) {
    std::string result = "";
    std::map<int, std::string> rev_num_map;
    
    for (const auto& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }
    
    std::vector<int> sorted_nums;
    std::stringstream ss(numbers);
    std::string word;
    while (ss >> word) {
        sorted_nums.push_back(num_map[word]);
    }
    
    std::sort(sorted_nums.begin(), sorted_nums.end());
    
    for (int num : sorted_nums) {
        result += rev_num_map[num] + " ";
    }
    
    result.pop_back(); 
    return result;
}