```cpp
#include <iostream>
#include <algorithm>

int skjkasdkd(int arr[]) {
    int max = *std::max_element(arr, arr + sizeof(arr) / sizeof(arr[0]));
    if (max >= 8192) {
        return 10;
    } else {
        return 5;
    }
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(skkjasdkd(arr) == 10);
    return 0;
}