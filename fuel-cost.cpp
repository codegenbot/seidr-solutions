#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int new_num = (num / 3);
        new_num = min(new_num, 1); // Rounding down to the nearest integer
        new_num -= 2;
        sum += new_num;
    }
    return sum;
}