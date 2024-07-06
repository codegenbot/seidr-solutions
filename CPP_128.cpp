#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1; // Initialize product to 1
    long long sum = 0; // Use long long for sum as it can be larger than int
    
    if(arr.empty()) {
        return -32768;
    }
    
    for(int num : arr) { 
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0)); // Update product with sign of number
        sum += abs(num); // Add absolute value to sum
    }
    
    return product * sum; // Return product of signs multiplied by sum of magnitudes
}