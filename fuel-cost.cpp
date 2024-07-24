#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = min(result, 0); // round down to nearest integer
        result -= 2; 
        total += result;
    }
    return total;
}