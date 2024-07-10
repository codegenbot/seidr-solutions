#include <iostream>
#include <algorithm>
#include <vector>

int getMax(int n) {
    int max = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        arr[i] = x;
        if(x > max)
            max = x;
    }

    return *std::max_element(arr.begin(), arr.end());
}