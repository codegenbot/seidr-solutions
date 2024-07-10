#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = (result > 0) ? (result - 2) : 0;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> vec; // Read input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    cout << fuelCost(vec) << endl;

    return 0;
}