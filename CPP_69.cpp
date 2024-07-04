#include <unordered_map>
#include <vector>
#include <iostream>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (auto& [num, count] : freq) {
        if (count >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {3, 10, 10, 9, 2};
    std::cout << search(input) << std::endl; // Expected output: -1
    return 0;
}