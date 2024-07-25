#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int num = i / 3 - 2; // divide by 3, round down to nearest integer and subtract 2
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &i : vec) {
        cin >> i;
    }
    cout << fuelCost(vec) << endl;
    return 0;
}