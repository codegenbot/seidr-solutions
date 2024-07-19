```
#include <cassert>

int bitCount(int* a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        while ((a[i] & 1) == 0)
            a[i] >>= 1;
        sum += a[i] & 1;
    }
    return sum;
}

int main() {
    assert(bitCount(new int[3]{127, 97, 8192}, 3) == 10);
    delete[] new int[3]{127, 97, 8192};
    return 0;
}