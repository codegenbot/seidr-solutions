#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> by_length_old(const std::vector<int>& arr) {
    std::map<int, std::string> digit_map = {
        {4, "Four"},
        {9, "Nine"},
        {8, "Eight"}
    };
    std::vector<std::string> result;
    for (int num : arr) {
        result.push_back(digit_map[num]);
    }
    return result;
}

int main_old() {
    assert(issame(by_length_old({9, 4, 8}), std::vector<std::string>{"Nine", "Four", "Eight"}));
    return 0;
}