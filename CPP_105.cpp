#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<std::string>& b) {
    std::vector<std::string> number_words = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<std::string> b_sorted = b;
    std::sort(b_sorted.begin(), b_sorted.end());
    
    std::vector<std::string> b_by_length;
    for (int num : a) {
        b_by_length.push_back(b_sorted[num]);
    }
    
    return b_by_length == b;
}

int main() {
    assert(issame({9, 4, 8}, {"Nine", "Four", "Eight"}));
    return 0;
}