#include <vector>
#include <numeric>
#include <limits>
#include <cmath>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    std::vector<std::vector<int>> res;
    
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
    
    res.push_back(std::vector<int>());
    for (int j = 0; j <= leftIndex; j++) {
        res.back().push_back(v[j]);
    }
    if (totalSum != halfSum) {
        res.push_back(std::vector<int>());
        for (int j = leftIndex; j < n; j++) {
            res.back().push_back(v[j]); 
        }
    } else {
        res.push_back(res[0]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<std::vector<int>> result = cutVector(input);
    for (const auto& sub : result) {
        for (int num : sub) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
    return 0;
}