#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (!num) continue; // skip zeros
        product *= ((num > 0) ? 1 : -1);
        sum += abs(num);
    }

    return (arr.empty()) ? INT_MIN : product * sum;
}