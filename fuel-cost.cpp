#include <vector>
using namespace std;

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        temp = floor(temp); // round down to nearest integer
        temp -= 2;
        sum += temp;
    }
    return sum;
}