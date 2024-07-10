```cpp
#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    auto max_element_iter = *std::max_element(arr, arr+n);

    // Use the iterator
    int max_element = *max_element_iter;

    std::cout << "Maximum element: " << max_element << std::endl;

    return 0;
}