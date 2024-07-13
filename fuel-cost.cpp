#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = i / 3 - 2; // divide by 3, round down, and subtract 2
        sum += num; // add to the sum
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << fuelCost(v) << endl;
    return 0;
}