#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>

std::string sort_numbers(const std::string &input) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::stringstream ss(input);
    std::vector<std::string> numbers;
    std::string token;

    while (ss >> token) {
        numbers.push_back(token);
    }

    std::sort(numbers.begin(), numbers.end(), [&](const std::string &a, const std::string &b) {
        return num_map[a] < num_map[b];
    });

    std::stringstream result;
    for (const auto &num : numbers) {
        result << num << " ";
    }

    return result.str();
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}