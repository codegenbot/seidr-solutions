#include <assert.h>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(std::to_string(num));
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    std::vector<std::string> result;
    for (const auto& str : nums) {
        if (str.length() == 3) {
            if (str == "One") str = "001";
            else if (str == "Two") str = "002";
            else if (str == "Three") str = "003";
            else if (str == "Four") str = "004";
            else if (str == "Five") str = "005";
            else if (str == "Six") str = "006";
            else if (str == "Seven") str = "007";
            else if (str == "Eight") str = "008";
            else if (str == "Nine") str = "009";
        }
        result.push_back(str);
    }

    return result;
}