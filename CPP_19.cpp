#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <cassert>

string sort_numbers(string numbers);

int main() {
    map<string, int> num_map = {
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

    std::string input_numbers;
    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, input_numbers);

    std::string sorted_output = sort_numbers(input_numbers);
    std::cout << "Sorted numbers: " << sorted_output << std::endl;

    return 0;
}

string sort_numbers(string numbers) {
    map<int, string> rev_num_map;
    for(auto it : num_map) {
        rev_num_map[it.second] = it.first;
    }

    vector<int> sorted_nums;
    std::stringstream ss(numbers);
    std::string token;
    while(std::getline(ss, token, ' ')) {
        sorted_nums.push_back(num_map[token]);
    }

    std::sort(sorted_nums.begin(), sorted_nums.end());

    std::string result;
    for(auto num : sorted_nums) {
        result += rev_num_map[num] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}