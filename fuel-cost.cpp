#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = (result > 0 ? result - 2 : 0);
        sum += result;
    }
    return sum;
}