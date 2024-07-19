#include <string>
#include <cassert>
#include <vector>
#include <algorithm>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }
    std::sort(filtered_arr.begin(), filtered_arr.end());
    std::reverse(filtered_arr.begin(), filtered_arr.end());
    std::vector<std::string> result;
    for (int num : filtered_arr) {
        result.push_back(names[num - 1]);
    }
    return result;
}