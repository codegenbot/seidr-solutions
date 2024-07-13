#include <iostream>
#include <numeric>
#include <vector>
#include <limits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    long long minDiff = numeric_limits<long long>::max();
    long long leftSum = 0;
    long long rightSum = accumulate(v.begin(), v.end(), 0LL);

    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        rightSum -= v[i];

        if (leftSum == rightSum) {
            res[0].resize(i + 1);
            copy(v.begin(), v.begin() + i + 1, back_inserter(res[0]));
            res[1] = vector<int>(v.begin() + i + 1, v.end());
            return res;
        }

        long long diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            res[0].resize(i + 1);
            copy(v.begin(), v.begin() + i + 1, back_inserter(res[0]));
            res[1] = vector<int>(v.begin() + i + 1, v.end());
        }
    }

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