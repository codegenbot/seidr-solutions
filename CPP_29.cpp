#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Define lambda function to check if two vectors of strings are the same
auto issame = [](std::vector<std::string> a, std::vector<std::string> b){
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