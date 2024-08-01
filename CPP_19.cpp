#include <iostream>
#include <cassert>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

std::string sort_numbers(const std::string &numbers_str) {
    std::stringstream ss(numbers_str);
    std::vector<std::string> numbers;
    std::string number;
    while (ss >> number) {
        numbers.push_back(number);
    }
    std::sort(numbers.begin(), numbers.end());
    std::stringstream result_ss;
    for (const auto &num : numbers) {
        result_ss << num << " ";
    }
    return result_ss.str();
}