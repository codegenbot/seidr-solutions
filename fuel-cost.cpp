#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += (i / 3 - 2);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    cout << fuelCost(v) << endl;
    return 0;
}