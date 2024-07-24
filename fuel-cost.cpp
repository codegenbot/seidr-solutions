#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = max(result - 2, 0); // round down to the nearest integer and subtract 2
        sum += result;
    }
    return sum;
}