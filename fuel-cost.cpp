#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = floor((double)x / 3) - 2;
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