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

    int left_sum = 0, right_sum = 0;
    int min_diff = INT_MAX;
    int cut_spot = 0;

    for (int i = 0; i < n; ++i) {
        left_sum += vec[i];
    }

    for (int i = 0; i < n; ++i) {
        right_sum += vec[i];
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_spot = i;
        }
    }

    for (int i = 0; i < cut_spot + 1; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    for (int i = cut_spot + 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}