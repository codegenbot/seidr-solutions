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

int testMain() {
    int arr[] = {127, 97, 8192};
    int size = sizeof(arr)/sizeof(int);
    assert(testMain() == 10); 
    return 0;
}