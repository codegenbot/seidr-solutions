#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = floor(x);
        x -= 2;
        sum += x;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    cout << fuelCost(v) << endl;
    return 0;
}