```cpp
#include <vector>
#include <cmath>
using namespace std;

int fuelCost(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = floor(temp - 2);
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;