#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

void cutVector(const vector<int>& vec) {
    int n = vec.size();
    int totalSum = accumulate(vec.begin(), vec.end(), 0);
    int leftSum = 0, minDiff = INT_MAX, cutIndex = -1;

    for (int i = 0; i < n - 1; ++i) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex + 1);
    vector<int> rightVec(vec.begin() + cutIndex + 1, vec.end());

    for (int num : leftVec) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : rightVec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    cutVector(vec);
    return 0;
}