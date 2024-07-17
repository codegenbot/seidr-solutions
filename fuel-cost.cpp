#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = (i / 3);
        val = floor(val); // round down to nearest integer
        val -= 2; 
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << fuelCost(vec) << endl;
    return 0;
}