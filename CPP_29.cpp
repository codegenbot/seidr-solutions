#include <iostream>
#include <vector>
#include <string>
#include <cassert>  // Include this header for assert

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
    
    std::vector<std::string> filtered = filter_by_prefix(strings, prefix);
    
    assert(filtered.size() == 2);
    assert(filtered[0] == "apple");
    assert(filtered[1] == "apricot");
    
    return 0;
}