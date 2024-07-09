#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3) > 0 ? ((x / 3) - 2) : 0;
        sum += y;
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
    cout << fuelCost(v) << endl;
    return 0;
}