#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int newNum = (num / 3);
        newNum = floor(newNum) - 2;
        sum += newNum;
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