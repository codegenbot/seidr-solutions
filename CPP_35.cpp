#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr;
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    arr.resize(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int max = *std::max_element(arr.begin(), arr.end());
    std::cout << "Maximum element is: " << max << std::endl;

    return 0;
}