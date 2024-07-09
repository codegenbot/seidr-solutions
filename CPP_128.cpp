#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int product = 1;
    long sum = 0;
    for (int num : arr) {
        sum += abs(num);
        product *= sign(num);
    }
    return product * sum;
}

int sign(int num) {
    return num ? (num > 0 ? 1 : -1) : 0;
}