#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int>& arr, int k) {
    std::sort(arr.begin(), arr.end());
    return std::vector<int>(arr.begin() + (arr.size() - k), arr.end());
}

int main() {
    // Your code
}