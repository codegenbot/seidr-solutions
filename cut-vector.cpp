#include <iostream>
#include <numeric>
#include <vector>
#include <limits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    long long minDiff = numeric_limits<long long>::max();
    int cutPoint = 0;

    long long leftSum = 0;
    long long rightSum = 0;

    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        rightSum = 0;
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutPoint = i;
        }
    }

    res[0].resize(cutPoint + 1);
    copy(v.begin(), v.begin() + cutPoint + 1, back_inserter(res[0]));
    res[1] = vector<int>(v.begin() + cutPoint + 1, v.end());

    return res;
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    vector<vector<int>> result = cutVector(input);
    cout << "The first part of the vector is: ";
    for(int i : result[0]) {
        cout << i << " ";
    }
    cout << endl;
    cout << "The second part of the vector is: ";
    for(int i : result[1]) {
        cout << i << " ";
    }
    return 0;
}