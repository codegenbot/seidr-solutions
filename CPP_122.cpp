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
    int arr[] = {5, 12, 34, 56, 78, 99, 100, 200};
    int k = sizeof(arr) / sizeof(arr[0]);
    std::cout << add_elements(arr, k);

    return 0;
}