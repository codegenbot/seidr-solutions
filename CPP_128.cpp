#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    int productSign = 1; // Initialize product of signs to 1 (neutral element)
    long long totalMagnitude = 0; // Use long long for sum of magnitudes

    if(arr.empty()) {
        return -32768;
    }

    for(int num : arr) {
        if(num < 0) {
            productSign *= -1; // Multiply by -1 for negative number
        } else if(num > 0) {
            totalMagnitude += abs(num); // Add magnitude of positive number
        }
    }

    return productSign * totalMagnitude;
}