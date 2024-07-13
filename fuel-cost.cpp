#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int divided = num / 3;
        int result = floor(divided) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    cout << fuelCost(v) << endl;
    return 0;
}