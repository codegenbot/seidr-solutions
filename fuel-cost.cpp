#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int res = i / 3;
        res = floor(res);
        res -= 2;
        sum += res;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    cout << fuelCost(vec) << endl;
    return 0;
}