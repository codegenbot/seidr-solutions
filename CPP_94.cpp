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

int skjkasdkd(void* p, std::size_t n) {
    unsigned char* data = static_cast<unsigned char*>(p);
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        count += countOnes(*reinterpret_cast<int*>(&data[i]));
    }
    return count;
}

assert(skjkasdkd(&arr[0], size) == 10);