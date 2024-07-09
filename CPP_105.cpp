#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<int> sorted_filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_filtered.push_back(num);
        }
    }
    std::sort(sorted_filtered.begin(), sorted_filtered.end());
    std::reverse(sorted_filtered.begin(), sorted_filtered.end());
    std::vector<std::string> result;
    for (int num : sorted_filtered) {
        result.push_back(names[num - 1]);
    }
    return result;
}