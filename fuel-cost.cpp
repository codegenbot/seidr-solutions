#include <vector>

int calculateFuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(floor((double)price / 3));
        if (newPrice < 1) {
            newPrice = 0;
        } else {
            newPrice--;
        }
        sum += newPrice;
    }
    return sum;