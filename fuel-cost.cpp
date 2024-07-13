#include <vector>
using namespace std;

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        sum += (i / 3 - 2);
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter integer " << i + 1 << ": ";
        cin >> x;
        vec.push_back(x);
    }
    cout << "The sum is: " << fuelCost(vec) << endl;
    return 0;
}