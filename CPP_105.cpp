#include <algorithm>
#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(std::to_string(num));
        }
    }

    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());

    std::vector<std::string> result;
    for (std::string str : nums) {
        switch (std::stoi(str)) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;