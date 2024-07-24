#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += vec[i];
    }

    int min_diff = abs(left_sum - right_sum);
    int cut_index = 0;
  
    for (int i = 0; i < n-1; i++) {
        left_sum += vec[i];
        right_sum -= vec[i];
        int current_diff = abs(left_sum - right_sum);
        if (current_diff < min_diff) {
            min_diff = current_diff;
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