#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int signProduct = 1;
    long long sumMagnitude = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; // If the array contains zero, return -32768
        }
        signProduct *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sumMagnitude += abs(num);
    }
    
    if (arr.empty()) {
        return -32768;
    }
    
    return signProduct * sumMagnitude;
}