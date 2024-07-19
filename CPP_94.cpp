#include <cassert>

int customBitCount(int* a, int size) {
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
    int size = 3; int arr[3] = {127, 97, 8192};
    assert(customBitCount(arr, size) == 10);
    return 0;
}