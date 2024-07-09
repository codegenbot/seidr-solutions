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
        if ((numbers[i + 1] - numbers[i]) < minDiff) {
            minDiff = numbers[i + 1] - numbers[i];
            closestPair.first = numbers[i];
            closestPair.second = numbers[i + 1];
        }
    }
    
    return closestPair;
}

int main() { 
    std::vector<float> testVec;
    testVec.push_back(1.1f);
    testVec.push_back(2.2f);
    testVec.push_back(3.3f);
    testVec.push_back(4.4f);
    testVec.push_back(5.5f);
    testVec.push_back(6.6f);
    testVec.push_back(7.7f);
    testVec.push_back(8.8f);
    testVec.push_back(9.9f);
    testVec.push_back(10.0f);
    
    Pair closestPair = find_closest_elements(testVec);
    
    if (issame({closestPair.first, closestPair.second}, {2.2f, 2.3f})) {
        std::cout << "The closest pair is (" << closestPair.first << ", " << closestPair.second << ")" << std::endl;
    } else {
        std::cout << "Error: The closest pair does not match the expected result." << std::endl;
    }
}