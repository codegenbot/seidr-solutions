#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = static_cast<int>(num / 3.0);
        result -= 2;
        total += result;
    }
    return total;
}