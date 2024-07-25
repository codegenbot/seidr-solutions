#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    std::string result;
    for (size_t i = 0; i < numbers.size(); i += 5) {
        result += rev_map[num_map[numbers.substr(i, 4)]] + " ";
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}