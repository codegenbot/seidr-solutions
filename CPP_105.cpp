#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> numToStr{
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

    std::vector<std::string> result;
    for (int num : arr) {
        if (numToStr.find(num) != numToStr.end()) {
            result.push_back(numToStr[num]);
        }
    }

    return result;
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> vec1 = by_length({1, 9, 4});
    std::vector<std::string> vec2 = by_length({9, 4, 1});
    assert(is_same(vec1, vec2));
    assert(is_same(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Four"});

    return 0;
}