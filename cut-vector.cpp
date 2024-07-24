#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    int left_sum = 0, right_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n; i++) {
        right_sum = left_sum;
        left_sum += vec[i];
        
        if (std::abs(left_sum - right_sum) < min_diff) {
            min_diff = std::abs(left_sum - right_sum);
            cut_index = i;
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + cut_index + 1);
    std::vector<int> subvec2(vec.begin() + cut_index + 1, vec.end());

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