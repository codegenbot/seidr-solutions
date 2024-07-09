#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int signProduct = 1;
    long long sumOfMagnitudes = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        int sign = (num > 0)? 1: ((num < 0)? -1: 0);
        signProduct *= sign;
        sumOfMagnitudes += abs(num);
    }
    
    return signProduct * sumOfMagnitudes;
}