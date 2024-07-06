```cpp
#include <vector>

int prod_signs(vector<int> arr) {
    long long product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        sum += abs(num);
        product *= (num > 0) ? 1 : ((num < 0) ? -1 : 0);
    }

    return product * sum;
}