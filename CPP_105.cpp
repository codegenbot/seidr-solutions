#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    std::vector<std::string> result;
    std::map<int, std::string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                               {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                               {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int num : nums) {
        result.push_back(numberNames[num]);
    }
    return result;
}