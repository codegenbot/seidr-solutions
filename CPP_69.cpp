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
    assert(search({1, 2, 2, 3, 3, 3}) == 3);
    assert(search({1, 2, 2, 3, 3, 4}) == 2);
    assert(search({4, 4, 4, 4}) == 4);
    assert(search({1, 1, 1}) == 1);
    assert(search({}) == -1);

    // Example usage
    std::vector<int> input;
    int n;
    std::cout << "Enter elements, followed by EOF (Ctrl+D):\n";
    while (std::cin >> n) {
        input.push_back(n);
    }
    std::cout << "Result: " << search(input) << std::endl;
    return 0;
}