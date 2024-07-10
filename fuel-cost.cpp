#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for(int i : v) {
        int num = (i / 3); 
        num = floor((double)num); 
        num -= 2; 
        sum += num; 
    }
    return sum;
}