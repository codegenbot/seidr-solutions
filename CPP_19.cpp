#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::string sort_numbers(const std::string& numbers_str) {
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

    std::vector<std::string> numbers;
    std::string number;
    for (const auto& c : numbers_str) {
        if (c == ' ') {
            numbers.push_back(number);
            number.clear();
        } else {
            number += c;
        }
    }
    numbers.push_back(number);

    std::sort(numbers.begin(), numbers.end(), [&](const std::string& a, const std::string& b) {
        return number_map[a] < number_map[b];
    });

    std::string sorted_numbers;
    for (const auto& num : numbers) {
        sorted_numbers += num + " ";
    }
    sorted_numbers.pop_back(); // remove extra space at the end

    return sorted_numbers;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}