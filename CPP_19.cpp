#include <iostream>
#include <string>
#include <map>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_num_map;
    for (const auto &pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    std::string result;
    std::string current_num;
    for (char c : numbers) {
        if (c == ' ') {
            result += rev_num_map[num_map[current_num]] + " ";
            current_num = "";
        } else {
            current_num += c;
        }
    }
    result += rev_num_map[num_map[current_num]];

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}