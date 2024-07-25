#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (int)floor(result); // round down to nearest integer
        result -= 2; // subtract 2 from the result
        sum += result; // add the result to the total sum
    }
    return sum;
}