#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        int num = i / 3 - 2; // divide by 3, round down and subtract 2
        total += num;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    cout << fuelCost(vec) << endl;
    return 0;
}