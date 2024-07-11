#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int signProd = 1;
    long long sumMag = 0;
    for (int num : arr) {
        if (num == 0) {
            signProd = 0; // If there's a zero, the product of signs is zero
            break;
        }
        signProd *= sign(num); // Calculate the product of signs
        sumMag += abs(num); // Calculate the sum of magnitudes
    }
    return signProd * sumMag;
}