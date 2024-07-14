#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int res = (num / 3);
        res = floor(res);
        res -= 2;
        sum += res;
    }
    return sum;
}