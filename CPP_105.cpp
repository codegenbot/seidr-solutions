#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    return std::equal(vec1.begin(), vec1.end(), vec2.begin());
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    std::map<int, std::string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));

    return 0;
}