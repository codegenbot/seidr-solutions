```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int maxElement() {
    int arr[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return *std::max_element(arr, arr + sizeof(arr)/sizeof(arr[0]));
}

int main() {
    std::cout << "Maximum element is: " << maxElement() << std::endl;
    return 0;
}