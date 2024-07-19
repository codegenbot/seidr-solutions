#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

std::string sort_numbers(std::string numbers);

int main() {
    // Sample usage
    std::string numbers = "one six four two three";
    std::cout << sort_numbers(numbers) << std::endl;
}

std::string sort_numbers(std::string numbers) {
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

    std::map<int, std::string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    std::vector<std::string> num_strings;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token) {
        num_strings.push_back(token);
    }

    std::sort(num_strings.begin(), num_strings.end(), [&](const std::string& a, const std::string& b) {
        return num_map[a] < num_map[b];
    });

    std::string result;
    for (const auto& num : num_strings) {
        result += num + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}