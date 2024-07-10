#include <vector>
using namespace std;

int calculateFuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int res = (i / 3);
        if (res >= 1)
            sum += res - 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    cout << calculateFuelCost(vec) << endl;
    return 0;
}