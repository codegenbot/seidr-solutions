#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    // Function implementation remains the same
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> vec1 = by_length({1, 9, 4});
    std::vector<std::string> vec2 = by_length({9, 4, 1});
    assert(is_same(vec1, vec2));
    assert(is_same(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Eight", "Four"}); // Corrected assert call
    
    return 0;
}