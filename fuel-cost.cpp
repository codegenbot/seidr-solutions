#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3);
        y = floor(y); // round down to nearest integer
        y -= 2; 
        sum += y;
    }
    return sum;
}