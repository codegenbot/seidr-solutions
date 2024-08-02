#include <vector>
#include <iostream>

using namespace std;

void cutVector(vector<int> v) {
    int leftSum = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        leftSum += v[i];
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < v.size() - 1; i++) {
        int rightSum = leftSum + v[i] - v[0];
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvec(v.begin(), v.begin() + cutIndex + 1);
    vector<int> rightSubvec(v.begin() + cutIndex + 1, v.end());

    cout << "[";
    for (int i : leftSubvec) {
        cout << i;
    }
    cout << "]" << endl;

    cout << "[";
    for (int i : rightSubvec) {
        cout << i;
    }
    cout << "],0" << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cutVector(v);

    return 0;
}