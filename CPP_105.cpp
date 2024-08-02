#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> numToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"},
        {9, "Nine"}};
    
    std::vector<std::string> result;
    
    for (const auto& num : arr) {
        if (numToString.find(num) != numToString.end()) {
            result.push_back(numToString[num]);
        }
    }
    
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}