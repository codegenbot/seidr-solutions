Here is the completed code:

#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int total = 0;
    for (int x : v) {
        int result = (x / 3);
        result = result - 2;
        if (result >= 1) {
            total += result;
        }
    }
    return total;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << fuelCost(v) << endl;
    return 0;
}