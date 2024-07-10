#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = (i / 3);
        num = (num > 0) ? num - 2 : 0;
        sum += num;
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