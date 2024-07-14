#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0) ? result - 2 : 0; // round down and subtract 2
        sum += result;
    }
    return sum;
}