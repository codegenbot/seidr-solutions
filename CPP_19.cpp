#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

std::string sort_numbers(const std::string &numbers) {
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

    std::vector<std::string> num_strings;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token) {
        num_strings.push_back(token);
    }

    std::sort(num_strings.begin(), num_strings.end(), [&](const std::string &a, const std::string &b) {
        return number_map[a] < number_map[b];
    });

    std::string result;
    for (const std::string &num_str : num_strings) {
        result += num_str + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
}