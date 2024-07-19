#include <iostream>
#include <assert.h>

int skjkasdkd(int* a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 128)
            sum += 2;
        else
            sum++;
    }
    return sum;
}

int oldMain() {
    int* a = new int[3];
    a[0] = 127;
    a[1] = 97;
    a[2] = 8192;
    int result = skjkasdkd(a, 3);
    delete[] a;
    return result;
}

int main() {
    assert(oldMain() == 10);
    return 0;
}