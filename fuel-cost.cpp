#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int x = i / 3;
        x = floor(x);
        sum += x - 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << fuelCost(vec) << endl;
    return 0;
}