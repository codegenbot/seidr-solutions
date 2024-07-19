```cpp
#include <cassert>

int skjkasdkd(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (*arr & (1 << 15)) {
            sum++;
        }
        arr++;
    }
    return sum;
}

int main() {
    int arr[] = {127, 97, 8192};
    int size = sizeof(arr)/sizeof(int);
    assert(skjkasdkd(&arr[0], size) == 10); 
    return 0;
}