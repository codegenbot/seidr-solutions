#include <iostream>
#include <assert.h>

int skjkasdkd(int arr[], int size) {
    int sum = 0;
    for (int i : arr) {
        if (i >= 128)
            sum += 2;
        else
            sum++;
    }
    return sum;
}

int main() {
    assert(skJkasdkd({127, 97, 8192}, 3) == 10);
    return 0;
}