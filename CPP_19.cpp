#include <iostream>
#include <map>
#include <string>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> nums = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<int, std::string> rev_nums;
    for (auto it : nums) {
        rev_nums[it.second] = it.first;
    }

    std::string result = "";
    int num_count = 0;
    int i = 0;
    while (i < numbers.size()) {
        std::string current_word = "";
        while (numbers[i] != ' ' && i < numbers.size()) {
            current_word += numbers[i];
            ++i;
        }
        
        if (nums.find(current_word) != nums.end()) {
            int num = nums[current_word];
            if (num == num_count) {
                result += rev_nums[num] + " ";
                ++num_count;
            } else {
                break;
            }
        }
        ++i;
    }

    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}