#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelQuantities) {
    int totalFuel = 0;
    for (int quantity : fuelQuantities) {
        int newQuantity = (quantity / 3) - 2;
        if (newQuantity > 0) {
            totalFuel += newQuantity;
        }
    }
    return totalFuel;
}

int main() {
    vector<int> quantities;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int quantity;
        cin >> quantity;
        quantities.push_back(quantity);
    }
    cout << calculateFuelCost(quantities) << endl;
    return 0;
}