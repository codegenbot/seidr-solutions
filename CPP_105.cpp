```cpp
#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());

    std::map<int, std::string> numberToString = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                                    {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    std::vector<std::string> result;
    for (int num : nums) {
        result.push_back(numberToString[num]);
    }

    return result;
}