#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i; // Return the index where sum first becomes negative
        }
    }
    return nums.size();
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = basement(nums);
    cout << "Result: " << result << endl;

    return 0;
}