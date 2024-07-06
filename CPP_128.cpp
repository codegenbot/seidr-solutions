```cpp
#include <vector>

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sum += abs(num);
        product *= (num > 0 ? 1 : -1);
    }
    return product * sum;
}