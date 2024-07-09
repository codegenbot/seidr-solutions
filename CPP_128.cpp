#include <vector>
#include <algorithm>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int product = 1;
    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }
    int sum = 0;
    for (int num : arr) {
        sum += abs(num);
    }
    return product * sum;
}