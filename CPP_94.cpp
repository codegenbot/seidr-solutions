```
#include <cassert>

int customBitCount(int* arr, int size) {
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
    assert(customBitCount(&arr[0], sizeof(arr)/sizeof(int)) == 10);
    return 0;
}