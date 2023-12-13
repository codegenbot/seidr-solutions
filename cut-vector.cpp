#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& input) {
    int n = input.size();
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 1; i < n; i++) {
        int sum_left = 0;
        int sum_right = 0;

        for (int j = 0; j < i; j++) {
            sum_left += input[j];
        }

        for (int j = i; j < n; j++) {
            sum_right += input[j];
        }

        int diff = abs(sum_left - sum_right);

        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> subvector1(input.begin(), input.begin() + cut_index);
    std::vector<int> subvector2(input.begin() + cut_index, input.end());

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(input);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}