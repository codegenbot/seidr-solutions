#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    long long res = 1;
    int zeroCount = 0;

    for (int num : arr) {
        if (num == 0) {
            zeroCount++;
        } else if (num > 0) {
            res *= num;
        } else {
            res *= -1;
        }
    }

    if (zeroCount > 0) {
        return 0;
    } else if (res < 0) {
        return -32768;
    } else {
        return res;
    }
}