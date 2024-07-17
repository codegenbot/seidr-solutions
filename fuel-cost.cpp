#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int newNumber = (number / 3);
        newNumber = min(newNumber, 0); // round down to the nearest integer
        newNumber--; // subtract 2
        total += newNumber; // add to the total
    }
    return total;
}