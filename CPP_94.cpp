```cpp
#include <cassert>

int bitCount(int a) {
    int count = 0;
    while (a) {
        a &= ~1;
        count++;
    }
    return count;
}

int main() {
    int arr[3] = {127, 97, 8192};
    for (int i = 0; i < 3; i++) {
        assert(bitCount(arr[i]) == customBitCount(&arr[i], 1));
    }
    return 0;
}