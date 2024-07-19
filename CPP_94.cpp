#include <cassert>

int bitCount(int* a, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        while (*a) {
            *a &= ~1;
            count++;
        }
        a++;
    }
    return count;
}

int main() {
    assert(countBits(new int[3]{127, 97, 8192}, 3) == 10);
    delete[] new int[3]{127, 97, 8192};
    return 0;
}