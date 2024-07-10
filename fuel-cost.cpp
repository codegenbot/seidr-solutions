#include <vector>
using namespace std;

int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double val = i / 3.0; // divide by 3 and round down to nearest integer
        sum += static_cast<int>(val) - 2; // subtract 2 and add to the sum
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) {
        cin >> i;
    }

    cout << calculateFuelCost(vec) << endl;

    return 0;
}