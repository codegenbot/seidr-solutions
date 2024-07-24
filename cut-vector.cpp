#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> leftVec = {vec[0]};
    for (int i = 1; i < splitIndex; i++) {
        leftVec.push_back(vec[i]);
    }

    vector<int> rightVec = vec;
    rightVec.erase(rightVec.begin() + splitIndex, rightVec.end());

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

    cout << "Left Vector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right Vector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}