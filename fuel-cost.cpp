#include <vector>
using namespace std;

int solve(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        if (num % 3 == 1) {
            sum += 0;
        } else if (num % 3 == 2) {
            sum += 1;
        }
    }
    return sum;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> x;
        if(x <= 0) {
            cout << "Error: all inputs must be positive integers." << endl;
            return -1;
        }
        nums[i] = x / 3;
    }
    int result = solve(nums);
    cout << result << endl;
    return 0;
}