#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 1; i < n; ++i) {
        int diff = abs(std::accumulate(vec.begin(), vec.begin() + i, 0) - std::accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << vec[i] << std::endl;
    }
    
    return 0;
}