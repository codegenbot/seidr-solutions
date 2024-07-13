#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int val = (num / 3);
        val = floor(val); // round down to nearest integer
        val -= 2; 
        sum += val;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        input.push_back(num);
    }

    cout << fuelCost(input) << endl;

    return 0;
}