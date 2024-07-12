Here is the modified code:

```cpp
#include <vector>
#include <cassert>
#include <cstdlib>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;

}

int main() {
    std::vector<int> arr = {-1, 1, 1, 0};
    int result = prod_signs(arr);
    return result;
}