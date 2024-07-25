#include <vector>
using namespace std;

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int num = (i / 3);
        num = floor(num - 2);
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        v.push_back(x);
    }
    cout << "The fuel cost is: " << fuelCost(v) << endl;
    return 0;
}