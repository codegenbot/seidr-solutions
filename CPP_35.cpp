#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        l.push_back(num);
    }
    
    if(l.empty()) {
        std::cout << "No elements entered. Exiting.\n";
        return 0;
    }

    int max_val = *std::max_element(l.begin(), l.end());
    std::cout << "Maximum value is: " << abs(max_val) << "\n";

    return 0;
}