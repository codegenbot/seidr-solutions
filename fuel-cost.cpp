#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        if (temp > 0) {
            temp--;
            sum += temp;
        }
    }
    return sum;
}