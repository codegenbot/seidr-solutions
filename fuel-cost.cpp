#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& nums) {
    int total = 0;
    for (int num : nums) {
        int result = (num / 3) - 2;
        total += result;
    }
    return total;
}

int main() {
    vector<int> inputs;
    // Read input from the user
    int n;
    cin >> n;
    while(n--) {
        int num; 
        cin >> num;
        inputs.push_back(num);
    }

    int output = calculateFuelCost(inputs);

    cout << output << endl;

    return 0;
}