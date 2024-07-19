#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> valid_nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            valid_nums.push_back(num);
        }
    }

    std::sort(valid_nums.begin(), valid_nums.end());
    std::reverse(valid_nums.begin(), valid_nums.end());

    for (int num : valid_nums) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}