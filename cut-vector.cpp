#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n-1; i++) {
        int diff = std::abs(std::accumulate(vec.begin(), vec.begin() + i + 1, 0) - std::accumulate(vec.begin() + i + 1, vec.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    std::vector<int> subvec1(vec.begin(), vec.begin() + cutIndex + 1);
    std::vector<int> subvec2(vec.begin() + cutIndex + 1, vec.end());
    
    for (int num : subvec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : subvec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}