#include <vector>
#include <cmath>

using namespace std;

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        sum += abs(num);
    }

    return product * sum;
}