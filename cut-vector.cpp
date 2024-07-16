#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n-1; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i+1; j < n; ++j) {
            right_sum += vec[j];
        }
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx+1; i < n; ++i) {
        std::cout << vec[i] << std::endl;
    }
    
    return 0;
}