```cpp
int prod_signs(int* arr, int n) {
    if (n == 0) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sign *= (arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0));
        sum += std::abs(arr[i]);
    }
    return (sign > 0) ? sum : -sum;
}

int arr[] = {-1, 1, 1, 0};
int result = prod_signs(arr, sizeof(arr)/sizeof(arr[0]));
assert (result == 0);