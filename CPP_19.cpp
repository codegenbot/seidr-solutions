#include <iostream>
#include <sstream>
#include <algorithm>
#include <cassert>

std::string sort_numbers(const std::string& numbers_str) {
    std::istringstream iss(numbers_str);
    std::string number;
    std::vector<std::string> numbers_vec;

    while (iss >> number) {
        numbers_vec.push_back(number);
    }

    std::sort(numbers_vec.begin(), numbers_vec.end());

    std::string result;
    for (const auto& num : numbers_vec) {
        result += num + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}