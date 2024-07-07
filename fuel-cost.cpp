```
#include <vector>

int fuelCost(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int x = (i / 3);
        double temp = (double)x; 
        x = temp;
        sum += x - 2; 
    }
    return sum;
}