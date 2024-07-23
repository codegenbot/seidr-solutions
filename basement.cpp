#include <iostream>
#include <vector>

using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums;
    int input;
    while (cin >> input) {
        nums.push_back(input);
    }
    int result = basement(nums);
    cout << "Result: " << result << endl;
    return 0;
}