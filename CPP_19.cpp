#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

std::string sort_numbers(const std::string &input) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
                                    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_num_map;

    for (const auto &pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    std::vector<std::string> numbers;
    std::string num_str;
    for (const char &c : input) {
        if (c == ' ') {
            numbers.push_back(num_str);
            num_str.clear();
        } else {
            num_str += c;
        }
    }
    numbers.push_back(num_str);

    std::sort(numbers.begin(), numbers.end(), [&](const std::string &a, const std::string &b) {
        return num_map[a] < num_map[b];
    });

    std::string result;
    for (const auto &num : numbers) {
        result += num + " ";
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}