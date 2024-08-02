#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int n;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        int num;
        std::cin >> num;
        l.push_back(num);
    }

    return *std::max_element(l.begin(), l.end());
}