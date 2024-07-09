#include <iostream>
#include <vector>
#include <algorithm>

float findMaxElement(std::vector<float> l){
    return *std::max_element(l.begin(), l.end());
}