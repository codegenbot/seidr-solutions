#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int i : arr) {
        int val = (i / 3);
        val = max(0, val - 2);
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }
    cout << fuelCost(arr) << endl;
    return 0;
}