#include <algorithm>

int prod_signs(vector<int> arr) {
    int sign = 1;
    long long sum = 0;
    
    if(arr.empty()) return -32768; 

    for(int i : arr) {
        if(i != 0) {
            sign *= (i >= 0 ? 1 : -1);
            sum += abs(i);
        }
    }

    return sign * sum;
}