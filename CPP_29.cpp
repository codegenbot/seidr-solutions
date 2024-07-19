#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Update the lambda function definition:
auto issame = [](const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
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
    // Call filter_by_prefix with correct parameters
    auto filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    // Print out the filtered strings
    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }

    return 0;
}