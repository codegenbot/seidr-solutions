#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>

std::string sort_numbers(const std::string &numbers_str) {
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

    std::stringstream ss(numbers_str);
    std::vector<std::string> numbers;
    std::string word;
    while (ss >> word) {
        numbers.push_back(word);
    }

    std::sort(numbers.begin(), numbers.end(), [&](const std::string &a, const std::string &b) {
        return number_map[a] < number_map[b];
    });

    std::string result;
    for (const auto &num : numbers) {
        result += num + " ";
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}