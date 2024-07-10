#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int x = i / 3;
        sum += (x - 2);
    }
    return sum;
}