```cpp
#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    leaders(arr);
    return 0;
}