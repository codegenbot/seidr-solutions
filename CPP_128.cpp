#include <vector>
#include <numeric>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num == 0)
            return -32768; // return -32768 for empty arr.
        product *= (num > 0 ? 1 : -1);
    }
    return abs(accumulate(arr.begin(), arr.end(), 0));
}