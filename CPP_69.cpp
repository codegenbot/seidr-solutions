#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first) {
            result = std::max(result, pair.first);
        }
    }
    return result;
}

int main() {
    std::vector<int> test = {3, 10, 10, 9, 2};
    std::cout << (search(test) == -1) << std::endl; // Should print 1 (true)
    return 0;
}