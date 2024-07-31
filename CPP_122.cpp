#include <iostream>

int add_elements(int arr[], int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {12, 5, 78, 100, 45};
    int k = 5;
    std::cout << add_elements(arr, k) << std::endl;
    return 0;
}