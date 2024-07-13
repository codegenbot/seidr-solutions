#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left, right;
    long long diff = numeric_limits<long long>::max();

    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = 0;

        // sum of elements on the left side
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }

        // sum of elements on the right side
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            left.assign(v.begin(), v.begin() + i + 1);
            right = vector<int>(v.begin() + i + 1, v.end());
        }
    }

    return {left, right};
}

int main() {
    vector<int> input = {3, 964, 6793, 4803};
    pair<vector<int>, vector<int>> result = cutVector(input);
    cout << "The first part of the vector is: ";
    for(int i : result.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "The second part of the vector is: ";
    for(int i : result.second) {
        cout << i << " ";
    }
    return 0;
}