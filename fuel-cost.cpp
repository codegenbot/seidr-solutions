#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = (i / 3);
        num = num - 2;
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while(n--) {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    cout << fuelCost(v) << endl;
    return 0;
}