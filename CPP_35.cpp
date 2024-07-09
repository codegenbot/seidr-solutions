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

    return *std::max_element(l.begin(), l.end());
}

int main() {
    assert(std::abs(getMax(0) - 12) < 1e-4);
    return 0; // <- comment out or remove this line
}