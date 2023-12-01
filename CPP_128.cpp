#include <vector>

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int signProduct = 1;
    int magnitudeSum = 0;
    
    for (int num : arr) {
        if (num < 0) {
            signProduct *= -1;
        } else if (num == 0) {
            return 0;
        }
        magnitudeSum += abs(num);
    }
    
    return magnitudeSum * signProduct;
}