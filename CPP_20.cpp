#include <initializer_list>
#include <algorithm>
#include <vector>
#include <limits>

bool findSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> findClosestElements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    std::pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return std::vector<float>{closestPair.first, closestPair.second};
}

int testMain() {
    assert(findSame({2.2f, 3.1f}, findClosestElements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f})));
    return 0;
}