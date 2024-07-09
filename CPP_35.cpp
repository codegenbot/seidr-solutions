```cpp
#include <algorithm>
#include <cmath>
#include <iostream>

int getMax(int n) {
    std::vector<int> l;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        l.push_back(x);
    }

    return *std::max_element(l.begin(), l.end());
}