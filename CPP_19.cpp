#include <iostream>
#include <map>
#include <string>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> nums = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_nums;
    for (auto it : nums) {
        rev_nums[it.second] = it.first;
    }

    std::string result = "";
    for (int i = 0; i <= 9; ++i) {
        if (numbers.find(rev_nums[i]) != std::string::npos) {
            result += rev_nums[i] + " ";
        }
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}