#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cassert>

int search(const std::vector<int>& lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    for (const auto& [num, count] : freq) {
        if (count >= num) {
            result = std::max(result, num);
        }
    }
    
    return result;
}

int main() {
    // Test cases
    assert(search({1, 2, 2, 3, 3, 3}) == 2);
    assert(search({1, 1, 1, 2, 2}) == 1);
    assert(search({4, 4, 4, 4}) == 4);
    assert(search({4, 4, 4, 4, 3, 3, 3}) == 4);
    assert(search({1, 2, 3, 4, 5}) == -1);
    
    std::cout << "All test cases passed!\n";
    return 0;
}