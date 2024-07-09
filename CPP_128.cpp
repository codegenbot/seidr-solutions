#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long magnitude_sum = 0;

    if(arr.empty()) return -32768;

    for(int num : arr) {
        if(num == 0) continue;
        sign_product *= ((num > 0) ? 1 : (num < 0) ? -1 : 0);
        magnitude_sum += abs(num);
    }

    return sign_product * magnitude_sum;
}