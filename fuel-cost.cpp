#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        if (num % 3 == 0) {
            sum += (num / 3 - 2);
        } else {
            sum += (num / 3 - 1);
        }
    }
    return sum;
}