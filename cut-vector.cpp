#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i; j < n; ++j) {
            right_sum += vec[j];
        }
        
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    std::vector<int> subvec1(vec.begin(), vec.begin() + cut_index);
    std::vector<int> subvec2(vec.begin() + cut_index, vec.end());
    
    std::cout << "Subvector 1:";
    for (int elem : subvec1) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;
    
    std::cout << "Subvector 2:";
    for (int elem: subvec2) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;
    
    return 0;
}