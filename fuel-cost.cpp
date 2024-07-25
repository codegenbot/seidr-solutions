#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        int x = (v[i] / 3);
        sum += (x - 2);
    }
    return sum;
}