#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        if (temp > 0) {
            temp--;
            sum += temp;
        }
    }
    return sum;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> x;
        v[i] = x;
    }
    cout << fuelCost(v) << endl;
    return 0;
}