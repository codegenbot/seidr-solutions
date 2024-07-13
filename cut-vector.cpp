#include <climits>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    if(v.size() <= 1) {
        return {{v}};
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
        if (diff <= minDiff) {
            minDiff = diff;
        }
        leftSum += v[i];
        rightSum -= v[i];
    }
    
    res[0].assign(v.begin(), v.begin() + cutIndex);
    res[1].assign(v.begin() + cutIndex, v.end());
    
    return res;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << cutVector(v).size() << " " << cutVector(v)[0].size() << std::endl;
    return 0;
}