#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = (double)num / 3.0;
        result = floor(result);
        result -= 2; 
        sum += (int)result;
    }
    return sum;
}