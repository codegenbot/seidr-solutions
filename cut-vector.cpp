#include <vector>
#include <algorithm>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    std::vector<std::vector<int>> res(2);
    
    res[0].resize(0);
    res[1].resize(0);
    long long totalSum = 0;
    for (int i = 0; i < v.size(); i++) {
        totalSum += v[i];
    }
    int minDiff = INT_MAX;
    int leftIndex = 0;
    
    long long halfSum = totalSum / 2;
    if (totalSum % 2 != 0) {
        halfSum++;
    }
    
    for (int i = 0; i < v.size(); i++) {
        while (i < v.size() && totalSum > halfSum) {
            totalSum -= v[i];
            leftIndex = i + 1;
            if (totalSum == halfSum || std::abs(totalSum - halfSum) < minDiff) {
                minDiff = std::abs(totalSum - halfSum);
                break;
            }
        }
    }
    
    res[0].clear();
    for (int j = 0; j <= leftIndex; j++) {
        res[0].push_back(v[j]);
    }
    if (totalSum != halfSum) {
        res[1].clear();
        for (int j = leftIndex; j < v.size(); j++) {
            res[1].push_back(v[j]); 
        }
    } else {
        res[1] = res[0];
    }
    
    return res;
}