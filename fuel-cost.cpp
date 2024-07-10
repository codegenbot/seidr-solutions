#include <vector>
using namespace std;

int fuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to the nearest integer
        newNum -= 2; 
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> inputs;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        inputs.push_back(num);
    }

    cout << fuelCost(inputs);

    return 0;
}