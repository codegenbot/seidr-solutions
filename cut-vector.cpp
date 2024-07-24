#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
        total_sum += vec[i];
    }

    int left_sum = 0, right_sum = total_sum;
    int min_diff = std::abs(left_sum - right_sum);
    int cut_index = 0;

    for (int i = 0; i < n; i++) {
        left_sum += vec[i];
        right_sum -= vec[i];

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