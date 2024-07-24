#include <vector>
using namespace std;

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
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