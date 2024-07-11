#include <vector>

int prod_signs(vector<int> arr) {
    long long product = 1;
    for (int num : arr) {
        if (num == 0) return 0; // 0 sign has no effect, so we can stop here
        product *= (num > 0 ? 1 : -1);
    }
    return product * abs(arr.empty() ? 0 : *max_element(arr.begin(), arr.end()));
}