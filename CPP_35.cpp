#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i<n; ++i) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        l.push_back(x);
    }
    if(l.size() > 0)
        std::cout << "Maximum element: " << *std::max_element(l.begin(), l.end()) << std::endl;
    else
        std::cout << "No elements to find maximum." << std::endl;
    return 0;
}