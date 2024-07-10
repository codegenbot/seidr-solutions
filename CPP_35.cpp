#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int num;
    while(std::cin >> num) {
        l.push_back(num);
    }
    if(l.size() == 0) {
        std::cout << "No elements in the vector." << std::endl;
    } else {
        std::cout << "The maximum element is: " << *std::max_element(l.begin(), l.end()) << std::endl;
    }
    return 0;
}