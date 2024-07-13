#include <vector>
using namespace std;

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int num : v) {
        int temp = num / 3 - 2;
        sum += temp;
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