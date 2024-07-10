```cpp
#include <vector>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int num : arr) {
        sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }
    return (sign > 0) ? sum : -sum;
}