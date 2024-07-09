#include <iostream>
#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        int val = static_cast<int>(i / 3.0);
        val -= 2;
        total += val;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int& x : vec) {
        cin >> x;
    }
    cout << fuelCost(vec) << endl;
    return 0;
}