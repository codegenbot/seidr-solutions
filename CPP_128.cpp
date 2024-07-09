#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int signProd = 1; // Initialize product of signs to 1
    long long sumMag = 0; // Initialize sum of magnitudes to 0
    
    for (int num : arr) {
        if (num == 0) { // If the number is zero, reset the sum and sign product
            sumMag = 0;
            signProd = 1;
        } else {
            int sign = (num > 0 ? 1 : -1); // Get the sign of the number
            sumMag += abs(num); // Add the magnitude to the sum
            signProd *= sign; // Multiply the sign product by the sign
        }
    }
    
    if (arr.empty()) { // If the array is empty, return -32768
        return -32768;
    } else {
        return sumMag * signProd; // Return the sum of magnitudes multiplied by the product of signs
    }
}