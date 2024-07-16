#include <vector>
#include <string>
#include <map>
#include <algorithm>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::map<int, std::string> num_to_str = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }

    std::sort(filtered_arr.begin(), filtered_arr.end());

    std::reverse(filtered_arr.begin(), filtered_arr.end());

    for (int num : filtered_arr) {
        result.push_back(num_to_str[num]);
    }

    return result;
}