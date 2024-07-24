#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = (result > 0 ? result - 1 : 0);
        sum += result;
    }
    return sum;
}