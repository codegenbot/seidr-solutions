#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> vec;

    // Read vector size
    std::cin >> n;

    // Read vector elements
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec.push_back(num);
    }

    // Your logic for finding the cut spot goes here

    return 0;
}