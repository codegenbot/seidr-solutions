#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int newInt = (i / 3) - 2;
        sum += newInt;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) {
        cin >> x;
    }
    cout << fuelCost(v) << endl;
    return 0;
}