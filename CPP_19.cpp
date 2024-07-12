#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> reverse_map;

    for (const auto& pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    std::vector<int> sorted_numbers;
    std::istringstream iss(numbers);
    std::string token;
    while (iss >> token) {
        sorted_numbers.push_back(number_map[token]);
    }

    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    std::string result;
    for (int num : sorted_numbers) {
        result += reverse_map[num] + " ";
    }

    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}