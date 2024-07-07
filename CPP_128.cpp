#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    int sumMagnitude = 0;

    for (int i : arr) {
        if (i == 0) {
            return -32768; // return -32768 for empty or contains zero
        }
        product *= (i > 0 ? 1 : -1);
        sumMagnitude += abs(i);
    }

    return product * sumMagnitude;
}