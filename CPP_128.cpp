Here is the completed code:

```cpp
#include <vector>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum = 0;
    for (int num : arr) {
        if (num == 0) continue;
        int sign = num / abs(num);
        sign_product *= sign;
        sum += abs(num);
    }
    return sign_product * sum;
}