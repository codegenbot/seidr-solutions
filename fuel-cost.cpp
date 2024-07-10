Here is the solution:

#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        sum += (num / 3 - 2);
    }
    return sum;
}

int main() {
    int n, val;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];
    cout << fuelCost(vec) << endl;
    return 0;
}