```
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3}; 
    int result = fuelCost(v);
    cout << "Fuel cost: " << result << endl;
    return 0;
}

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = (i / 3) - 2;
        sum += new_val;
    }
    return sum;
}