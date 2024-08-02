#include <iostream>
#include <map>
#include <cassert>

std::string sort_numbers(const std::string& numbers) {
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

    std::string result = "";
    for (const auto& [key, value] : num_map) {
        size_t pos = 0;
        while ((pos = numbers.find(key, pos)) != std::string::npos) {
            result += key + " ";
            pos += key.length();
        }
    }

    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}