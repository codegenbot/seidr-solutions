Here is the corrected code:

```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    if (k > arr.size()) {
        std::cout << "Error: k is greater than the size of array." << std::endl;
        return {};
    }
    
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    std::vector<int> maxResult = maximum(arr, k);
    if (!maxResult.empty()) {
        std::cout << "The maximum subarray of size " << k << " is: ";
        for (int num : maxResult) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Error occurred. Please check the input." << std::endl;
    }
    
    return 0;
}