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

int skjkasdkd(int* p, std::size_t n) { 
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        count += countOnes(*p++); 
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    int size = sizeof(arr)/sizeof(int);
    assert(skjkasdkd(&arr[0], size) == 10);
    return 0;
}