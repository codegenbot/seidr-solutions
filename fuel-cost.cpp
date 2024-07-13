#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = x - 2;
        sum += x;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << fuelCost(v) << endl;
    return 0;
}