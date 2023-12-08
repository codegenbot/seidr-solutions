#include <iostream>
#include <vector>

int main() {
    // Your code here
    
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    // Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible.
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < n - 1; i++) {
        if (std::abs(vec[i] - vec[i - 1]) < std::abs(minDiff)) {
            minDiff = std::abs(vec[i] - vec[i - 1]);
            splitIndex = i;
        }
    }
    
    // Return the two resulting subvectors as two outputs.
    std::vector<int> leftSubvector(splitIndex);
    for (int i = 0; i < splitIndex; i++) {
        leftSubvector[i] = vec[i];
    }
    
    std::vector<int> rightSubvector(n - splitIndex);
    for (int i = 0; i < n - splitIndex; i++) {
        rightSubvector[i] = vec[i + splitIndex];
    }
    
    return {leftSubvector, rightSubvector};
}