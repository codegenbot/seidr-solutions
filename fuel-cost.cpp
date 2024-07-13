#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        temp = floor(temp);
        sum += temp - 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &i : vec)
        cin >> i;
    cout << fuelCost(vec) << endl;
    return 0;
}