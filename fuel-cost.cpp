#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = min(result, 0); // round down to nearest integer
        sum += result - 2; // subtract 2 and add to sum
    }
    return sum;
}

int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}