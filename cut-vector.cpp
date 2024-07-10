#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& arr) {
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0)
            leftSum += arr[i];
        else
            leftSum -= arr[i];

        if (i == arr.size() - 1) 
            rightSum += arr[i];
        else
            rightSum -= arr[i];
    }
    int minDiff = abs(leftSum - rightSum);
    for (int i = 0; i < arr.size(); i++) {
        int left = 0;
        int right = 0;
        for (int j = 0; j <= i; j++) 
            left += arr[j];
        for (int j = i + 1; j < arr.size(); j++) 
            right += arr[j];
        if (abs(left - right) <= minDiff) {
            minDiff = abs(left - right);
            break;
        }
    }
    vector<int> res1(arr.begin(), arr.begin() + (arr.size() / 2));
    vector<int> res2(arr.begin() + (arr.size() / 2), arr.end());
    return {res1, res2};
}

int main() {
    // Testing the function
    vector<int> input = {1, 0};
    pair<vector<int>, vector<int>> result = cutVector(input);
    for (auto num : result.first) 
        cout << num << " ";
    cout << endl;
    for (auto num : result.second) 
        cout << num << " ";
    return 0;
}