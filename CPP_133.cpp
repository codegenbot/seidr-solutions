#include <iostream>
int sum_squares(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    return 0;
}