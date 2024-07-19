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

int main() {
    assert(skJkasdkd(new int[]{127, 97, 8192}, 3) == 10);
    delete[] new int[]{127, 97, 8192};
    return 0;
}