#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int x : arr) {
        int result = static_cast<int>(x / 3.0);
        result = result - 2;
        sum += result;
    }
    return sum;
}