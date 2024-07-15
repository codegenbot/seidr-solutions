#include <vector>
using namespace std;
int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = floor((double)i / 3) - 2; 
        sum += result;
    }
    return sum;
}