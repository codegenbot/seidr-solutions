#include <iostream>
#include <numeric>
#include <vector>
#include <limits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    long long minDiff = numeric_limits<long long>::max();
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        long long leftSum = accumulate(v.begin(), v.begin() + i, 0LL);
        long long rightSum = accumulate(v.begin() + i, v.end(), 0LL);

        long long diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    res[0].resize(cutIndex);
    copy(v.begin(), v.begin() + cutIndex, back_inserter(res[0]));
    res[1] = vector<int>(v.begin() + cutIndex, v.end());

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