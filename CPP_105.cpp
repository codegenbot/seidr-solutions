#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> result;
    std::map<int, std::string> num_map;
    num_map[1] = "One";
    num_map[2] = "Two";
    num_map[3] = "Three";
    num_map[4] = "Four";
    num_map[5] = "Five";
    num_map[6] = "Six";
    num_map[7] = "Seven";
    num_map[8] = "Eight";
    num_map[9] = "Nine";

    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end());

    for (int i = 0; i < sorted_arr.size(); i++) {
        int num = sorted_arr[i];
        if (num >= 1 && num <= 9) {
            result.push_back(num_map[num]);
        }
    }

    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::vector<int> input = {9, 4, 8};
    std::vector<std::string> expected_output = {"Nine", "Eight", "Four"};

    std::vector<std::string> output = by_length(input);

    assert(issame(output, expected_output));

    return 0;
}