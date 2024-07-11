#include <iostream>
#include <vector>

void cutVector(const std::vector<int>& arr, int cut_index) {
    std::vector<int> left_subvector(arr.begin(), arr.begin() + cut_index);
    std::vector<int> right_subvector(arr.begin() + cut_index, arr.end());

    for (const auto& num : left_subvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (const auto& num : right_subvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {3, 7, 2, 5, 1};
    int cut_index = 2;

    cutVector(arr, cut_index);

    return 0;
}