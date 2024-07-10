#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        if (result > 2)
            result--;
        else
            result = 0;
        sum += result - 2;
    }
    return sum;
}