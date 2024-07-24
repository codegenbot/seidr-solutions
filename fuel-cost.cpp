#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = (number / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += result;
    }
    return sum;
}