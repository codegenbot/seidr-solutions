#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int signProduct = 1;
    long sumMagnitude = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // Return immediately as product of signs is undefined
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sumMagnitude += abs(num); // Calculate magnitude sum
        signProduct *= sign; // Update sign product
    }

    return (arr.empty()) ? -32768 : signProduct * sumMagnitude;
}