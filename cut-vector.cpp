#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; ++j)
            leftSum += nums[j];
        for (int j = i; j < n; ++j)
            rightSum += nums[j];
        if (leftSum == rightSum) {
            return {{}, {nums.begin(), nums.end()}};
        }
    }
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i < n; ++i) {
        int leftSum = 0;
        for (int j = 0; j < i; ++j)
            leftSum += nums[j];
        int rightSum = 0;
        for (int j = i; j < n; ++j)
            rightSum += nums[j];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    return {{nums.begin(), nums.begin() + index}, {nums.begin() + index, nums.end()}};
}

int main() {
    // Example inputs
    vector<int> input1 = {1};
    vector<int> result1 = cutVector(input1);
    for (int num : result1[0]) 
        cout << num << " ";
    cout << endl;
    for (int num : result1[1]) 
        cout << num << " ";
    cout << endl;

    vector<int> input2 = {1, 10};
    vector<int> result2 = cutVector(input2);
    for (int num : result1[0])
        cout << num << " ";
    cout << endl;
    for (int num : result1[1]) 
        cout << num << " ";
    cout << endl;

    vector<int> input3 = {1, 100};
    vector<int> result3 = cutVector(input3);
    for (int num : result1[0])
        cout << num << " ";
    cout << endl;
    for (int num : result1[1]) 
        cout << num << " ";
    cout << endl;

    vector<int> input4 = {1, 1000};
    vector<int> result4 = cutVector(input4);
    for (int num : result1[0])
        cout << num << " ";
    cout << endl;
    for (int num : result1[1]) 
        cout << num << " ";
    cout << endl;

    vector<int> input5 = {1, 10000};
    vector<int> result5 = cutVector(input5);
    for (int num : result1[0])
        cout << num << " ";
    cout << endl;
    for (int num : result1[1]) 
        cout << num << " ";
    cout << endl;

    return 0;
}