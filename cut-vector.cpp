#include <iostream>
#include <vector>

void cutVector(const std::vector<int>& arr, int cut_index) {
    int n = arr.size();

    for (int i = cut_index; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    std::vector<int> arr = {3, 7, 2, 5, 1};
    int cut_index = 2;

    cutVector(arr, cut_index);

    return 0;
}