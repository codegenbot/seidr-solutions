#include <vector>
using namespace std;

int fuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3); // divide by 3 and round down to nearest integer
        newPrice = max(0, newPrice - 2); // subtract 2 if the result is negative or 0 otherwise
        total += newPrice; // add the new price to the total
    }
    return total;
}