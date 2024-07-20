#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int signProduct = 1;
    long sumMagnitude = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or contains zeros
        }
        
        int sign = (num > 0 ? 1 : (num < 0 ? -1 : 0));
        signProduct *= sign;
        sumMagnitude += abs(num);
    }
    
    return signProduct * sumMagnitude;
}