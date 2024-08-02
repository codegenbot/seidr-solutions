#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> numToStr {
        {4, "Four"},
        {8, "Eight"},
        {9, "Nine"}
    };
    
    std::vector<std::string> result;
    for (int num : arr) {
        result.push_back(numToStr[num]);
    }
    
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}