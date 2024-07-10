#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (!issame(arr[i], arr[0])) {
            return {arr[i]};
        }
    }
    return {arr[0]};
}