#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int sign = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign *= ((num > 0) ? 1 : -1);
        sum += abs(num);
    }
    
    if (arr.empty()) {
        return INT_MIN; // equivalent to -32768
    }
    
    return sign * sum;
}