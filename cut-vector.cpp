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
    int minLeft = INT_MAX, minRight = INT_MAX;
    int leftCut = 0, rightCut = 0;

    for (int i = 0; i < n; i++) {
        if (std::abs(leftSum - rightSum) < minLeft) {
            minLeft = std::abs(leftSum - rightSum);
            leftCut = i;
        } else if (std::abs(leftSum - rightSum) < minRight) {
            minRight = std::abs(leftSum - rightSum);
            rightCut = i;
        }
        if (leftSum + v[i] <= rightSum) {
            leftSum += v[i];
        } else {
            rightSum -= v[i];
        }
    }
    
    if (minLeft <= minRight) {
        std::vector<std::vector<int>> res;
        res.push_back(std::vector<int>());
        res.push_back(std::vector<int>());

        res[0].assign(v.begin(), v.begin() + leftCut);
        
        res[1].assign(v.begin() + leftCut, v.end());
        
        return res;
    } else {
        return {{v}};
    }
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << cutVector(v).size() << " " << cutVector(v)[0].size() << std::endl;
    return 0;
}