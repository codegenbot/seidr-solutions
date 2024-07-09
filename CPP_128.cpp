#include <vector>

int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num == 0)
            return -32768;
        product *= (num > 0 ? 1 : -1);
    }
    return abs(product);
}