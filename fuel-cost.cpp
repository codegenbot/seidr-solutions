#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = temp - 2;
        if (temp < 0) temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;
    }
    cout << fuelCost(v) << endl;
    return 0;
}