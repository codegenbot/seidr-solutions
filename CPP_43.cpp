#include <iostream>
#include <vector>

bool pairs_sum_to_zero(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> arr = {-3, 9, -2, 5, 1};
    std::cout << (pairs_sum_to_zero(arr) ? "True" : "False");
    return 0;
}