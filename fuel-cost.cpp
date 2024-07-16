```
#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int res = static_cast<int>(floor(double(num)/3)) - 2;
        if (res < 0) res = 0;
        sum += res;
    }
    return sum;
}

int main() { 
    return fuelCost({10,20,30,40,50}); 
}