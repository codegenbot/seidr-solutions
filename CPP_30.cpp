#include <iostream>
#include <vector>

bool areVectorsEqual(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}