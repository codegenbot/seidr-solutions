#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<std::string, int> numeral_map = {
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

std::string sort_numbers(std::string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

std::string sort_numbers(std::string numbers) {
    std::map<int, std::string> reverse_map;
    std::string result = "";

    std::string curr_num = "";
    for (char c : numbers) {
        if (c == ' ') {
            reverse_map[numeral_map[curr_num]] = curr_num;
            curr_num = "";
        } else {
            curr_num += c;
        }
    }
    reverse_map[numeral_map[curr_num]] = curr_num;

    for (auto it = reverse_map.begin(); it != reverse_map.end(); ++it) {
        result += it->second + " ";
    }

    return result;
}