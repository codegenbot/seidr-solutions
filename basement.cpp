#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    // Test cases
    vector<int> test1 = {1};
    cout << basement(test1) << endl;  // Output: 0

    vector<int> test2 = {1, -100};
    cout << basement(test2) << endl;   // Output: 0

    vector<int> test3 = {2, -1, 100};
    cout << basement(test3) << endl;    // Output: 0

    vector<int> test4 = {2, -95, 100};
    cout << basement(test4) << endl;     // Output: 0

    vector<int> test5 = {2, -30, 5};
    cout << basement(test5) << endl;      // Output: 0
    return 0;
}