#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3) - (x % 3 >= 2 ? 1 : x % 3 >= 1 ? 0 : 1);
        y -= 2;
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