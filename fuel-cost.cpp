Here is the solution:

#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int num = (i / 3);
        num = num > 0 ? (num - 1) : 0; // round down
        sum += num - 2; // subtract 2 and add to sum
    }
    return sum;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec[i] = x;
    }
    cout << fuelCost(vec) << endl;
    return 0;
}