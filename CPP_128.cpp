Here is the completed code:

```cpp
#include <vector>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_magnitudes = 0;
    for (int num : arr) {
        if (num == 0) continue;
        sign_product *= (num > 0 ? 1 : -1);
        sum_magnitudes += abs(num);
    }
    return sum_magnitudes * sign_product;
}