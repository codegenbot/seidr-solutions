#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        if (result >= 1)
            sum += result - 2;
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