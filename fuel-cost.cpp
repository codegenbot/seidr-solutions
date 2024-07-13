#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result >= 1) {
            result--;
        }
        sum += result - 2;
    }
    return sum;
}