#include <vector>
#include <cmath>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;