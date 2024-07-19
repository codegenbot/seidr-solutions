#include <cassert>

int skjkasdkd(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        while (*arr) {
            *arr &= *arr - 1;
            count++;
        }
        arr++;
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(bitCount(*((int*)arr)) == customBitCount(&arr[0], sizeof(int)));
    return 0;
}