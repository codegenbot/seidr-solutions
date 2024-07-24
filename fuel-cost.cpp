#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp - 2;
        sum += temp;
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