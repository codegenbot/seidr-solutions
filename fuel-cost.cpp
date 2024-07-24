#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        if (temp < 1) temp = 0; // round down to nearest integer
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << fuelCost(v) << endl;
    return 0;
}