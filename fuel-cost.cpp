#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_value = (i / 3) - 2;
        sum += new_value;
    }
    return sum;
}