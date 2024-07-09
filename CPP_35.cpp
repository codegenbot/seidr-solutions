#include <algorithm>
#include <cmath>
#include <initializer_list>
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

    int max = l[0];
    for (int i : l) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}