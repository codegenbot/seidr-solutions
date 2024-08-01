#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<std::string> arr){
    std::vector<std::string> result;
    std::vector<std::string> sorted_arr;
    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (const std::string& str : arr) {
        if (num_to_name.find(std::stoi(str)) != num_to_name.end()) {
            sorted_arr.push_back(str);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end(), [&](const std::string& a, const std::string& b) {
        return num_to_name[std::stoi(a)] > num_to_name[std::stoi(b)];
    });

    for (const std::string& num : sorted_arr) {
        result.push_back(num_to_name[std::stoi(num)]);
    }

    return result;
}

int main() {
    std::vector<std::string> arr = {"3", "1", "7", "4", "2", "9"};
    std::vector<std::string> expected_result = {"Nine", "Seven", "Four", "Three", "Two", "One"};

    std::vector<std::string> result = by_length(arr);

    assert(issame(result, expected_result));

    return 0;
}