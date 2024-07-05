#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

bool is_sorted(const std::vector<int>& lst) {
    if (lst.empty()) return true;
    
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i-1]) return false;
    }
    
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
        if (freq[num] > 2) return false;
    }
    
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({1, 2, 2, 3}) == true);
    assert(is_sorted({1, 2, 2, 2}) == false);
    assert(is_sorted({4, 3, 2, 1}) == false);
    assert(is_sorted({}) == true);
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}