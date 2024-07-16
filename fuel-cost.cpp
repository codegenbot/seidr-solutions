#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        newPrice = min(newPrice, 0);
        newPrice -= 2;
        sum += newPrice;
    }
    return sum;

}

int main() {
    vector<int> prices = {1, 2, 3}; 
    int result = fuelCost(prices);
    cout << "Fuel cost: " << result << endl;  
    return 0;
}