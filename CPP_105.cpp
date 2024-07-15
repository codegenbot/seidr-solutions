#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sort_numbers_by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::vector<int> sorted_arr;
    std::map<int, std::string> num_to_word = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        return std::to_string(a).length() > std::to_string(b).length();
    });

    for (int num : sorted_arr) {
        result.push_back(num_to_word[num]);
    }

    return result;
}