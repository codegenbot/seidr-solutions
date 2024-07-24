```
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits>
#include <stdexcept>

bool compareVectors(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6f) return false;
    }
    return true;
}

std::vector<float> findClosestElements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }
    
    float minDiff = std::numeric_limits<float>::max();
    auto closestPair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = std::make_pair(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }
    
    return {closestPair.first, closestPair.second};
}