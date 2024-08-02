#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    int k = 2;

    vector<int> maximum(vector<int> arr, int k) {
        vector<int> result;
        for (int i = 0; i < k; i++) {
            auto it = std::max_element(arr.begin(), arr.end());
            result.push_back(*it);
            arr.erase(it);
        }
        return result;
    }

    return 0;
}