#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iterator>

using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    // Iterate through the vector and find the spot where the difference is minimized
    int diff = numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return leftSubvector;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto result = cutVector(nums);

    // Print the elements of the resulting subvectors separately
    for (const auto& element : result) {
        cout << element << " ";
    }

    cout << endl;

    for (const auto& element : nums) {
        // Skip the elements of the first subvector
        if (find(result.begin(), result.end(), element) == result.end()) {
            cout << element << " ";
        }
    }

    return 0;
}