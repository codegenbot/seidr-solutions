#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = (i / 3);
        val = val > 0 ? val - 2 : 0; // round down to nearest integer and subtract 2
        sum += val;
    }
    return sum;
}