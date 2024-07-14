#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        int divided = num / 3;
        int result = floor(divided - 2);
        sum += result;
    }
    return sum;
}