#include <vector>
#include <algorithm>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += std::abs(num);
    }

    return product * sum < 0 ? INT_MIN : product * sum;
}