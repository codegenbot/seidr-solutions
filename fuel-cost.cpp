#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        total += (price / 3 - 2);
    }
    return total;
}

int main() {
    int numPrices;
    cin >> numPrices;
    
    vector<int> prices(numPrices);
    for (int i = 0; i < numPrices; ++i) {
        cin >> prices[i];
    }
    
    cout << calculateFuelCost(prices) << endl;
    
    return 0;
}