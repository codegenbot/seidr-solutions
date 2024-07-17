#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = num / 3 - 2;
        if (result < 0) {
            result = 0;
        }
        sum += result;
    }
    return sum;
}