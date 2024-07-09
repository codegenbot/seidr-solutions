#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = static_cast<int>(floor((double)i / 3));
        if (num > 0) {
            sum += num - 1;
        } else {
            sum -= 2;
        }
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