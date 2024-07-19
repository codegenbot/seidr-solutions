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

int main() {
    assert(bitCount({127, 97, 8192}) == customBitCount(&{127, 97, 8192}[0], sizeof(int) * 3));
    return 0;
}