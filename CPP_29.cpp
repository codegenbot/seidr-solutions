#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.compare(0, prefix.size(), prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Test cases
    std::vector<std::string> strings = {"apple", "banana", "apricot", "orange"};
    std::string prefix = "ap";
    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    for (const auto& filtered_str : filtered_strings) {
        cout << filtered_str << endl;
    }

    return 0;
}