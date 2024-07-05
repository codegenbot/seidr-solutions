#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, 
        {"eight", 8}, {"nine", 9}
    };
    std::map<int, std::string> rev_map = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, 
        {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, 
        {8, "eight"}, {9, "nine"}
    };

    std::vector<int> nums;
    std::stringstream ss(numbers);
    std::string word;
    while (ss >> word) {
        nums.push_back(num_map[word]);
    }

    std::sort(nums.begin(), nums.end());

    std::string result;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i > 0) result += " ";
        result += rev_map[nums[i]];
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string sorted_numbers = sort_numbers(input);
    std::cout << sorted_numbers << std::endl;
    return 0;
}