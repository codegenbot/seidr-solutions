#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = floor(price / 3) - 2;
        total += newPrice;
    }
    return total;
}