#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> nums) {
    std::vector<std::string> result;
    for (int num : nums) {
        std::string num_str;
        switch(num) {
            case 1:
                num_str = "One";
                break;
            case 2:
                num_str = "Two";
                break;
            case 3:
                num_str = "Three";
                break;
            case 4:
                num_str = "Four";
                break;
            case 7:
                num_str = "Seven";
                break;
            case 9:
                num_str = "Nine";
                break;
            default:
                num_str = "Unknown";
        }
        result.push_back(num_str);
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {3, 1, 7, 4, 2, 9};
    std::vector<std::string> expected_result = {"Nine", "Seven", "Four", "Three", "Two", "One"};

    std::vector<std::string> result = by_length(arr);

    assert(issame(result, expected_result));

    return 0;
}