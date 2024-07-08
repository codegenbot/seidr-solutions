#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_num_map;
    for (auto const& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    std::vector<int> sorted_numbers;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token) {
        sorted_numbers.push_back(num_map[token]);
    }
    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    std::string result;
    for (int num : sorted_numbers) {
        result += rev_num_map[num] + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}