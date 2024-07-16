#include <vector>
#include <iostream>

using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < v.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) leftSum += v[j];
        for (int j = i + 1; j < v.size(); j++) rightSum += v[j];

        if (leftSum == rightSum) {
            return {vector<int>(v.begin(), v.begin() + i + 1), vector<int>(v.begin() + i + 1, v.end())};
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    // If no equal sum or minimum difference found
    return {vector<int>(v.begin(), v.begin()), vector<int>(v.begin(), v.end())};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto result = cutVector(v);

    cout << "First Subvector: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Second Subvector: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}