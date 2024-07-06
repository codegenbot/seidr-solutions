Here's the modified code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 2};
    int k = 2;

    std::vector<int> result = maximum(arr, k);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}