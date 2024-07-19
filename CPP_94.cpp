```cpp
#include <iostream>
#include <assert.h>

int skjkasdkd(int a[]) {
    int sum = 0;
    for (int i : a) {
        if (i >= 128)
            sum += 2;
        else
            sum++;
    }
    return sum;
}

int main() {
    assert(skJkasdkd({127, 97, 8192}) == 10);
    return 0;
}