#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    long long totalSum = accumulate(v.begin(), v.end(), 0LL);
    long long leftSum = 0;
    long long minDiff = numeric_limits<long long>::max();

    for (int i = 0; i < n; i++) {
        if (leftSum + v[i] == totalSum - leftSum) {
            res[0].resize(i + 1);
            copy(v.begin(), v.begin() + i + 1, back_inserter(res[0]));
            res[1].resize(n - i - 1);
            copy(v.begin() + i + 1, v.end(), back_inserter(res[1]));
            return res;
        }
        long long diff = abs(leftSum - (totalSum - leftSum));
        if (diff <= minDiff) {
            minDiff = diff;
            res[0].resize(i + 1);
            copy(v.begin(), v.begin() + i + 1, back_inserter(res[0]));
            res[1].resize(n - i - 1);
            copy(v.begin() + i + 1, v.end(), back_inserter(res[1]));
        }
        leftSum += v[i];
    }

    return res;
}

int main() {
    vector<int> input = {964, 6793, 4803};
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