#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for(int i : v) {
        int num = (i / 3); // divide by 3
        num = floor((double)num); // round down to nearest integer
        num -= 2; // subtract 2
        sum += num; // add to the sum
    }
    return sum;
}