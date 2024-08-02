#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 2 : 0;
        total += temp;
    }
    return total;
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