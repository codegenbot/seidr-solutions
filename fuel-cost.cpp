Here is the solution:

#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double result = (double)i / 3;
        int newInt = (int)(result - 2);
        sum += newInt;
    }
    return sum;
}