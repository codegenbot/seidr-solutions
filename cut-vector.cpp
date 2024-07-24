Here is the solution:

#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int index = -1;
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }

    vector<int> leftVec(1, vec[0]);
    for (int i = 1; i <= index; i++) {
        leftVec.push_back(vec[i]);
    }

    vector<int> rightVec = vector<int>(vec.begin() + index + 1, vec.end());
    if (!rightVec.empty()) {
        rightVec.push_back(0);
    }

    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Left vector: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right vector: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}