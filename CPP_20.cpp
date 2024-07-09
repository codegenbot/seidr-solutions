```cpp
#include <iostream>
#include <vector>
#include <limits>

bool issame(std::vector<double> a, std::vector<double> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

struct Pair {
    double first, second;
};

Pair find_closest_elements(std::vector<double> numbers) {
    std::sort(numbers.begin(), numbers.end());
    double minDiff = std::numeric_limits<double>::max();
    Pair closestPair;
    
    for (int i = 0; i < numbers.size() - 2; ++i) {
        double diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair.first = numbers[i];
            closestPair.second = numbers[i + 1];
        }
    }
    
    return closestPair;
}

int main() { 
    std::vector<double> testVec = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    
    Pair closestPair = find_closest_elements(testVec);
    
    if (issame({closestPair.first, closestPair.second}, {2.2, 2.3})) {
        std::cout << "The closest pair is (" << closestPair.first << ", " << closestPair.second << ")" << std::endl;
    } else {
        std::cout << "Error: The closest pair does not match the expected result." << std::endl;
    }
}