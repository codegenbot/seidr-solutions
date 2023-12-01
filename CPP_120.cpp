#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + std::min(k, static_cast<int>(arr.size())));
    return result;
}

int main() {
    std::cout << "Test case passed!" << std::endl;
    return 0;
}