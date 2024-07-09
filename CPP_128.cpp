#include <vector>

int prod_signs(vector<int> arr) {
    long long product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // return -32768 for empty arr.
        }
        product *= abs(num);
        sum += num;
    }

    if (arr.empty()) {
        return -32768; // return -32768 for empty arr.
    }

    return product * sign(sum);
}

int sign(int n) {
    return (n > 0) ? 1 : ((n < 0) ? -1 : 0);
}