#include <iostream>
#include <vector>

void cutVector(const std::vector<int>& arr, int cut_index) {
    int n = arr.size();
    int min_diff = INT_MAX;
    int optimal_cut_index;

    for (int i = 1; i < n; i++) {
        int diff = abs(std::accumulate(arr.begin(), arr.begin() + i, 0) - std::accumulate(arr.begin() + i, arr.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            optimal_cut_index = i;
        }
    }

    for (int i = 0; i < optimal_cut_index; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    for (int i = optimal_cut_index; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    std::vector<int> arr = {3, 7, 2, 5, 1};
    int cut_index = 2;

    cutVector(arr, cut_index);

    return 0;
}