#include <unordered_map>
#include <algorithm>
#include <vector>
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
    assert(search({3, 10, 10, 9, 2}) == -1);
    std::cout << "All test cases pass." << std::endl;
    return 0;
}