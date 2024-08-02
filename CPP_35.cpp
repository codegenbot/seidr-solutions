#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        int x;
        std::cin >> x;
        l.push_back(x);
    }
    return *std::max_element(l.begin(), l.end());
}