#include <iostream>
#include <vector>
#include <cmath>

void cutVector(const std::vector<int>& arr) {
    int n = arr.size();
    int optimal_cut_index = 0;
    int min_diff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < n; j++) {
            if (j < i)
                sum_left += arr[j];
            else
                sum_right += arr[j];
        }
        int diff = std::abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            optimal_cut_index = i;
        }
    }

    std::vector<int> left(arr.begin(), arr.begin() + optimal_cut_index);
    std::vector<int> right(arr.begin() + optimal_cut_index, arr.end());

    for (int num : left) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : right) {
        std::cout << num << " ";
    }
}

int main() {
    std::vector<int> arr = {3, 7, 2, 5, 1};

    cutVector(arr);

    return 0;
}