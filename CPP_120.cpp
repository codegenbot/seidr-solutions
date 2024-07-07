#include <iostream>
#include <vector>
#include <algorithm>

bool compare_vectors(std::vector<int> a, std::vector<int> b) {
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
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = *std::max_element(arr.begin(), arr.end());
        result.push_back(it);
        arr.erase(std::remove(arr.begin(), arr.end(), it), arr.end());
    }
    return result;

}

int main() { 
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (!compare_vectors(maximum(arr, k), {3, -23, 243, 0})) {
        return 1;
    }
    return 0;
}