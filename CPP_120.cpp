#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
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
    std::sort(arr.begin(), arr.end());
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(arr[arr.size() - 1 - i]);
        arr.pop_back();
    }
    return result;
}

int main() { 
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (!issame(maximum(arr, k), std::vector<int>({3, -23, 243, 0}))) {
        return 1;
    }
    return 0;
}