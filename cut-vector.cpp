#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += arr[j];
        }
        for (int j = i; j < n; j++) {
            right_sum += arr[j];
        }
        
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        std::cout << arr[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cut_index; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
    
    return 0;
}