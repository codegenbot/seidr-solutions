#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int maxVal = 0;

    // Read input from user...
    for (int i; std::cin >> i;) {
        l.push_back(i);
        if (i > maxVal) maxVal = i;
    }

    // Return the maximum value in the vector
    return maxVal;
}