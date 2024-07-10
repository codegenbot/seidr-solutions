```cpp
#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    int arr[n]; 

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    int max_value = *std::max_element(arr, arr+n); 

    std::cout << "Maximum element: " << max_value << std::endl;

    return 0;
}