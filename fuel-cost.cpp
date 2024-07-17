#include <vector>
using namespace std;

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        temp = floor(temp); // round down to nearest integer
        temp -= 2; 
        sum += temp;
    }
    return sum;
}