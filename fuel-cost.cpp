#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = (i / 3);
        val = val - 2;
        if(val<0)
            val=0;
        sum += val;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << fuelCost(v) << endl;
    return 0;
}