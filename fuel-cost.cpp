#include <vector>
using namespace std;

int calculateFuelCost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        int result = (cost / 3);
        if (result >= 1) {
            result = result - 2;
        } else {
            result = 0;
        }
        total += result;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> costs(n);
    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }
    cout << calculateFuelCost(costs) << endl;
    return 0;
}