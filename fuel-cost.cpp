#include <vector>
#include <cmath> 
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if(num <= 0) {
            return -1; // Return -1 if the input vector contains a number that is not positive.
        }
        int result = (num / 3);
        result = floor((double)result); 
        result -= 2;
        sum += result;
    }
    return sum;
}