#include <vector>
using namespace std;

int basement(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Example usage
    vector<int> input1 = {1, -1};
    cout << basement(input1) << endl;  // Output: 0

    vector<int> input2 = {1, -100};
    cout << basement(input2) << endl;  // Output: 0

    vector<int> input3 = {2, -1, 100};
    cout << basement(input3) << endl;  // Output: 0

    vector<int> input4 = {2, -95, 100};
    cout << basement(input4) << endl;  // Output: 0

    vector<int> input5 = {2, -30, 5};
    cout << basement(input5) << endl;  // Output: 0
    return 0;
}