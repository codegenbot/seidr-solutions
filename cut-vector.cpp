#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& input) {
    int n = input.size();
    int minDiff = abs(input[0] - input[n-1]);
    int cutIndex = 0;
    for (int i = 1; i < n-1; i++) {
        int diff = abs(input[i] - input[n-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> subvector1(input.begin(), input.begin() + cutIndex + 1);
    vector<int> subvector2(input.begin() + cutIndex + 1, input.end());
    return make_pair(subvector1, subvector2);
}

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(input);
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }
    return 0;
}