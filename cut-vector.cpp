#include <vector>
#include <numeric>
#include <limits>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }
    int minDiff = std::numeric_limits<int>::max(); 
    int leftIndex = 0;
    
    long long halfSum = totalSum / 2;
    if (totalSum % 2 != 0) {
        halfSum++;
    }
    
    for (int i = 0; i < n; i++) {
        while (i < n && totalSum > halfSum) {
            totalSum -= v[i];
            leftIndex = i + 1;
            if (totalSum == halfSum || std::abs(totalSum - halfSum) < minDiff) {
                minDiff = std::abs(totalSum - halfSum);
                break;
            }
        }
    }
    
    auto subVec1 = std::vector<int>();
    for (int j = 0; j <= leftIndex; j++) {
        subVec1.push_back(v[j]);
    }
    auto subVec2 = std::vector<int>();
    if (totalSum != halfSum) {
        for (int j = leftIndex; j < n; j++) {
            subVec2.push_back(v[j]); 
        }
    } else {
        subVec2 = subVec1;
    }
    
    return {std::move(subVec1), std::move(subVec2)};
}