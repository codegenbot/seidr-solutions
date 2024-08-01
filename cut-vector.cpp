#include <iostream>
#include <vector>

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
    for (int i = 0; i < n; ++i) {
        total_sum += vec[i];
    }

    int left_sum = 0;
    int right_sum = total_sum;

    int cut_spot = -1;
    int min_diff = total_sum;

    for (int i = 0; i < n; ++i) {
        left_sum += vec[i];
        right_sum -= vec[i];
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_spot = i;
        }
    }

    std::vector<int> subvector1(vec.begin(), vec.begin() + cut_spot + 1);
    std::vector<int> subvector2(vec.begin() + cut_spot + 1, vec.end());

    return 0;
}