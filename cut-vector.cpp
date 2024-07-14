#include <vector>
#include <algorithm>

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
        return {{v.begin(), v.begin() + leftCut}, {v.begin() + leftCut, v.end()}};
    } else {
        return {{v}};
    }
}