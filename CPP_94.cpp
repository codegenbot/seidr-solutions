```cpp
#include <cassert>
#include <vector>

int skjkasdkd(vector<int> lst) {
    int count = 0;
    for (auto i : lst) {
        if (i == 8192)
            ++count;
    }
    return count;
}

int main() {
    vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 1);
    return 0;
}