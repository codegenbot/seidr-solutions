```cpp
#include <cassert>

int skjkasdkd(vector<int> lst) {
    int sum = 0;
    for (int num : lst) {
        while (num > 0) {
            sum += (num & 1);
            num >>= 1;
        }
    }
    return sum;
}

int main() {
    vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 10);
    return 0;
}