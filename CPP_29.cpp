#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> expected_result = {"xxx", "xxxAAA", "xxx"};
    std::vector<std::string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    assert(filtered_strings == expected_result);

    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }

    return 0;
}