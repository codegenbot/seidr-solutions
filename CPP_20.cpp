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
    std::vector<float> testVec(10, 0.0f);
    for (int i = 0; i < 10; ++i) {
        testVec[i] = static_cast<float>(i + 1.1f);
    }
    Pair closestPair = find_closest_elements(testVec);
    
    if (issame({closestPair.first, closestPair.second}, {2.2f, 2.3f})) {
        std::cout << "The closest pair is (" << closestPair.first << ", " << closestPair.second << ")" << std::endl;
    } else {
        std::cout << "Error: The closest pair does not match the expected result." << std::endl;
    }
}