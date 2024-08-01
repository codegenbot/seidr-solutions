#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int price : fuelPrices) {
        int newPrice = (price / 3); // Divide by 3
        if (newPrice > 0) { // Check if the result is positive
            newPrice -= 2; // Subtract 2
            totalCost += newPrice; // Add to the total cost
        }
    }
    return totalCost;
}