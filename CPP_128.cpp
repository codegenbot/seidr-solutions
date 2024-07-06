#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // return -32768 for empty arr
        }
        product *= sign(num);
        sum += abs(num);
    }

    return product * sum;
}

int sign(int n) {
    if (n > 0)
        return 1;
    else if (n < 0)
        return -1;
    else
        return 0;
}