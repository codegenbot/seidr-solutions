#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (int number : numbers) {
        int divided = number / 3;
        int result = floor(divided) - 2;
        total += result;
    }
    return total;
}