#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int getMaximumElement(std::vector<int> l) {
    int maxVal = *max_element(l.begin(), l.end());
    
    for (int i : l) {
        if (std::abs(i) > std::abs(maxVal)) {
            maxVal = i;
        }
    }
    
    return maxVal;
}