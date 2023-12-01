#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0, minDiff = INT_MAX, cutIndex = -1;

    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    // Iterate through each element and find the cut index
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the subvectors based on the cut index
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return make_pair(leftSubvector, rightSubvector);
}

int main() {
    vector<int> nums;
    int num;

    // Read input from user
    while (cin >> num) {
        nums.push_back(num);
    }

    // Generate the two resulting subvectors
    pair<vector<int>, vector<int>> result = cutVector(nums);

    // Print the resulting subvectors
    for (int num : result.first) {
        cout << num << endl;
    }
    for (int num : result.second) {
        cout << num << endl;
    }

    return 0;
}