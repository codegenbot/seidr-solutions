#include <iostream>
#include <string>

int sum_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int sumOfArrayElements(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i] * arr[i];
    }
    return total;
}

int main() {
    int n[] = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5};
    int nSize = sizeof(n)/sizeof(n[0]);
    std::cout << "Sum of squares is: " << sum_squares(sumOfArrayElements(n, nSize)) << std::endl;
    return 0;
}