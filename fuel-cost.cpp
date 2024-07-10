Here is the completed code:

#include <vector>
using namespace std;

int calculateFuelCost(vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int newCost = (cost / 3);
        if (newCost >= 1) {
            newCost = newCost - 2;
        } else {
            newCost = 0;
        }
        sum += newCost;
    }
    return sum;
}

int main() {
    vector<int> costs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int cost;
        cin >> cost;
        costs.push_back(cost);
    }
    cout << calculateFuelCost(costs) << endl;
    return 0;
}