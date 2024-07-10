#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        if (number % 3 == 0) {
            int result = (number / 3);
            total += --result;
        } else {
            int result = ((number + 2) / 3) - 1;
            total += result;
        }
    }
    return total;
}