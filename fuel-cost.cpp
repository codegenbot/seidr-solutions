#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int num = i / 3;
        if (num < 1) {
            num = 0;
        } else {
            num--;
        }
        sum += num;
    }
    return sum;
}