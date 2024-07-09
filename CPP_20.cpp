```cpp
#include <iostream>
#include <vector>
#include <limits>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

struct Pair {
    float first, second;
};

Pair find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    Pair closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair.first = numbers[i];
            closestPair.second = numbers[i + 1];
        }
    }
    
    return closestPair;
}

int main() { 
    std::vector<float> testVec = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.0f};
    Pair closestPair = find_closest_elements(testVec);
    
    if (issame({closestPair.first, closestPair.second}, {2.2f, 2.3f})) {
        std::cout << "The closest pair is (" << closestPair.first << ", " << closestPair.second << ")" << std::endl;
    } else {
        std::cout << "Error: The closest pair does not match the expected result." << std::endl;
    }
}