```cpp
#include <cassert>
#include <cstddef>

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int skjkasdkd(int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        count += countOnes(arr[i]);
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(skjkasdkd(arr, sizeof(arr)/sizeof(int)) == 10);
    return 0;
}