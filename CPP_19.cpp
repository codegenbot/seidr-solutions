#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <cassert>

std::string sort_numbers(std::string numbers) {
    std::istringstream iss(numbers);
    std::vector<std::string> nums(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{});

    std::sort(nums.begin(), nums.end(),
              [](const std::string &a, const std::string &b) {
                  static const std::vector<std::string> words{"zero", "one", "two", "three", "four", "five", "six"};
                  return std::distance(words.begin(), std::find(words.begin(), words.end(), a))
                         < std::distance(words.begin(), std::find(words.begin(), words.end(), b));
              });

    std::ostringstream oss;
    for (const auto &num : nums) {
        oss << num << " ";
    }

    return oss.str();
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}