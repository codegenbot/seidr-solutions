#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3) - 2;
        if (temp < 0) temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    vector<int> vec;

    cin >> n;
    for(int i=0; i<n; ++i) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    cout << fuelCost(vec);

    return 0;
}