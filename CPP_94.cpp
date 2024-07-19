```c
#include <cassert>

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int customBitCount(void* p, size_t n) {
    unsigned char* data = static_cast<unsigned char*>(p);
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        count += countOnes(*reinterpret_cast<int*>(&data[i]));
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(customBitCount(&arr[0], sizeof(arr)/sizeof(int)) == 10);
    return 0;
}