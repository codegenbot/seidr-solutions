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
    std::vector<int> lst = {3, 1, 4, 4, 5, 2, 6, 1, 1, 1}; // Example input
    std::cout << search(lst) << std::endl; // Test the search function

    assert(search({1, 2, 2, 3, 3, 3}) == 3);
    assert(search({5}) == -1);
    assert(search({}) == -1);
    assert(search({1, 1, 1, 1}) == 1);
    assert(search({2, 2, 2, 2, 1, 1}) == 2);

    return 0;
}