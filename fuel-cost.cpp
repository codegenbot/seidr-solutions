#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int num : numbers) {
        if (num >= 9) {
            totalFuel += 1;
        } else {
            totalFuel -= (num / 3 - 2);
        }
    }
    return totalFuel;
}