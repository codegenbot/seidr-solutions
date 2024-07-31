```cpp
#include <cmath>

double median(int arr[], int n) {
    double med;
    std::sort(arr, arr+n);
    if(n%2==1)
        med = (double)arr[n/2];
    else
        med = ((double)arr[n/2-1] + (double)arr[n/2]) / 2.0;
    return med;
}

int main() {
    int mainArr[] = {8, 1, 3, 9, 9, 2, 7};
    int size = sizeof(mainArr)/sizeof(mainArr[0]);
    assert (std::abs(median(mainArr, size) - 7) < 1e-4);
    return 0;
}