#include <vector>

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; 
        }
        sum += abs(num);
        product *= sign(num);
    }

    return sum * product;
}

int sign(int num) {
    return num > 0 ? 1 : (num < 0 ? -1 : 0);
}