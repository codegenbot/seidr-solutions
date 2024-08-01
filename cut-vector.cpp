#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::vector<int> vec;
    
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec.push_back(num);
    }
    
    int total_sum = 0;
    for (const auto &num : vec) {
        total_sum += num;
    }
    
    int prefix_sum = 0, min_diff = total_sum;
    int cut_spot = -1;
    for (int i = 0; i < n; ++i) {
        prefix_sum += vec[i];
        int diff = std::abs(prefix_sum - (total_sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_spot = i;
        }
    }
    
    for (int i = 0; i <= cut_spot; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = cut_spot + 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}