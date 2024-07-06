```cpp
#include <cassert>
#include <vector>

int skjkasdkd(const std::vector<int>&); // Declare function before use

int main() {
    std::vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 10);
    return 0;
}

int skjkasdkd(const std::vector<int>& lst) {
    int sum = 0;
    for (int i : lst) {
        if(i < 128)
            sum += i;
    }
    return sum;
}