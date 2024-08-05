#include <vector>
using namespace std;

int calculateFuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = i / 3;
        val = val > 0 ? val - 2 : 0;
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << calculateFuelCost(v) << endl;
    return 0;
}