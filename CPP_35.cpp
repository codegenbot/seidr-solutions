```
#include <iostream>
#include <algorithm>
#include <cmath>

int maxElementFinder(int n, int arr[]) {
    auto max_element = *std::max_element(arr, arr+n);

    return max_element;
}

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    int max_value = maxElementFinder(n, arr);

    std::cout << "Maximum element: " << max_value << std::endl;

    return 0;
}