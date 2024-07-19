#include <cassert>

int customBitCount(int n) {
    int count = 0;
    while(n) {
        n &= n - 1;
        count++;
    }
    return count;
}

int bitCounter(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        count += customBitCount(*arr);
        arr++;
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(bitCounter(&arr[0], sizeof(arr)/sizeof(arr[0])) == bitCount(*((int*)arr)));
    return 0;
}