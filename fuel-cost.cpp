#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& fuelCosts) {
    int sum = 0;
    for (int i : fuelCosts) {
        int cost = (i / 3); // divide by 3, round down to nearest integer
        if (cost >= 1) { 
            cost--; // subtract 2
        }
        sum += cost; 
    }
    return sum;
}

int main() {
    int n;
    vector<int> fuelCosts;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        fuelCosts.push_back(x);
    }

    cout << calculateFuelCost(fuelCosts);

    return 0;
}