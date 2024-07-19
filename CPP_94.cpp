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
    int* p = new int[size];
    for (std::size_t i = 0; i < size; ++i) {
        p[i] = arr[i];
    }
    assert(skjkasdkd(p, size) == 10);
    delete[] p;
    return 0;
}