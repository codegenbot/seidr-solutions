#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &nums) {
    int total = 0;
    for (int num : nums) {
        total += (num / 3 - 2);
    }
    return total;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << calculateFuelCost(input) << endl;
    return 0;
}