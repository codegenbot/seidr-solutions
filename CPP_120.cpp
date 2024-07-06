```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    if (k > n) {
        std::cout << "Error: k is greater than n." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> result = maximum(arr, k);

    if (!issame(result, arr)) {
        std::cout << "Maximum elements: ";
        for (const auto& val : result) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Array has repeated maximum values." << std::endl;
    }

    return 0;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}