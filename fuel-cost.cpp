#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        sum += ((x / 3) - 2);
    }
    return sum;
}

int main() {
    vector<int> input;
    int num;
    cin >> num;
    while(num--) {
        cin >> num;
        input.push_back(num);
    }
    cout << fuelCost(input) << endl;
    return 0;
}