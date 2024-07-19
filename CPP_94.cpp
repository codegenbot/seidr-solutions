```cpp
#include <cassert>

int customBitCount(void* ptr, int size) {
    int count = 0;
    unsigned char* p = (unsigned char*)ptr;
    for(int i=0; i<size; i++) {
        if((p[i] & 1))
            count++;
    }
    return count;
}

int bitCount(int a) {
    int count = 0;
    while (a) {
        a &= ~1;
        count++;
    }
    return count;
}

void testBitCount() {
    int arr[3] = {127, 97, 8192};
    for (int i = 0; i < 3; i++) {
        assert(bitCount(arr[i]) == customBitCount(&arr[i], sizeof(int)));
    }
}

int main() {
    testBitCount();
    return 0;
}