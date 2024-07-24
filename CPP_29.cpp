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
    // Add your test cases here without using assert due to redefinition error
    return 0;
}