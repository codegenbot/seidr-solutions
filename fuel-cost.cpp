#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = ((num / 3) - 2);
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    while(n--) {
        int x; 
        cin >> x;
        input.push_back(x);
    }
    cout << fuelCost(input) << endl;
    return 0;
}