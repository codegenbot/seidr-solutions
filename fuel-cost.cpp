#include <vector>
#include <cmath> 

using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = floor(i / 3.0);
        temp -= 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}