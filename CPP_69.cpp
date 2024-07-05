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
    std::vector<int> lst = {1, 2, 2, 3, 3, 3};
    assert(search(lst) == 2);
    std::vector<int> lst2 = {4, 4, 4, 4, 4};
    assert(search(lst2) == 4);
    std::vector<int> lst3 = {1, 1, 2, 2, 2, 3, 3, 3};
    assert(search(lst3) == 3);
    std::vector<int> lst4 = {7, 8, 8, 8, 8, 8, 8, 8};
    assert(search(lst4) == 8);
    std::cout << "All test cases passed!\n";
    return 0;
}