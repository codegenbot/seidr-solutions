#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += (i / 3 - 2);
    }
    return sum;
}