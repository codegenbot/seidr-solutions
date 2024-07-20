#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 2};
    int k = 3;
    std::cout << "Maximum subarray of size " << k << ": ";
    for (int i : maximum(arr, k)) {
        std::cout << i << " ";
    }
    return 0;
}