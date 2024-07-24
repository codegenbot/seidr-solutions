#include <iostream>
#include <cassert>

int main() {
    int k;
    std::vector<int> arr;
    std::cout << "Enter the size of array: ";
    std::cin >> k;
    std::cout << "Enter the elements of array: ";
    arr.resize(k);
    for (int i = 0; i < k; i++) {
        std::cin >> arr[i];
    }
    assert (add_elements(arr, k) == add_elements(arr, k));
    return 0;
}

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}