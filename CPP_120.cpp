#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while (k--) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        arr.erase(std::remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main() {
    std::vector<int> input = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (!input.empty()) {
        for (int i : maximum(input, k)) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No elements left" << std::endl;
    }
}