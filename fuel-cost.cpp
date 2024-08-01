#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double x = floor((double)i / 3);
        sum += (x - 2);
    }
    return sum;
}