#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int result = (num / 3);
        result = min(result, 0); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << fuelCost(v) << endl;
    return 0;
}