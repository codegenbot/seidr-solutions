#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

auto filter_by_prefix = [](const std::vector<std::string>& a, const std::vector<std::string>& b){
    return std::set<std::string>(a.begin(), a.end()) == std::set<std::string>(b.begin(), b.end());
};

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
    auto filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }

    return 0;
}