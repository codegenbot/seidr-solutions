#include <iostream>
#include <algorithm>
#include <vector>

int getMax(int n) {
    int max = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        if(x > max)
            max = x;
        vec.push_back(x);
    }

    return *std::max_element(vec.begin(), vec.end());
}