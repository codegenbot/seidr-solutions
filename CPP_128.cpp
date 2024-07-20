#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sumMagnitude = 0; // to avoid overflow
    
    for (int num : arr) {
        if (num == 0) {
            return 0; // as soon as a zero is found, the product of signs will be 0
        }
        product *= sign(num);
        sumMagnitude += abs(num); 
    }
    
    return (arr.empty()) ? -32768 : product * sumMagnitude;
}

int sign(int num) {
    if (num > 0)
        return 1;
    else if (num < 0)
        return -1;
    else
        return 0;
}