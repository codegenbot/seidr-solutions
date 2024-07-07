#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0; // Use long long to avoid overflow
    
    if(arr.empty()) return -32768; // Return -32768 for empty array

    for(auto num : arr) {
        if(num == 0) {
            product *= 0; // If the number is zero, reset the product
        } else {
            product *= (num > 0 ? 1 : -1); // Update the product with the sign of the number
        }
        sum += abs(num); // Calculate the sum of absolute values
    }

    return product * sum;
}