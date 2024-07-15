```
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector<int> v = {1, 2, 3};
    for (int i : v) {
        int new_val = static_cast<int>(floor(double(i) / 3)) - 2;
        sum += new_val;
    }
    cout << "The fuel cost is: " << sum << endl;
    return fuelCost(v);
}

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = static_cast<int>(floor(double(i) / 3)) - 2;
        sum += new_val;
    }
    return sum;
}