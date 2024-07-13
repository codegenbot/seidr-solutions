#include <climits>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    if(v.size() <= 1) {
        return {{}, {}};
    }
    
    int n = v.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    long long leftSum = 0, rightSum = sum;
    int minDiff = INT_MAX, cutIndex = -1;

    std::vector<std::vector<int>> res;
    res.push_back(std::vector<int>());
    res.push_back(std::vector<int>());

    for (int i = 0; i < n; i++) {
        long long diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) { 
            minDiff = diff;
            cutIndex = i;
        }
        leftSum += v[i];
        rightSum -= v[i];
    }
    
    res[0].resize(cutIndex + 1);
    for(int i = 0; i <= cutIndex; i++) {
        res[0].push_back(v[i]);
    }
    
    res[1].assign(v.begin() + (cutIndex + 1), v.end());
    
    return res;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << cutVector(v).size() << " " << cutVector(v)[0].size() << std::endl;
    return 0;
}