#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec = vector<int>(vec.begin(), vec.begin() + cutIndex);
    vector<int> rightVec = vector<int>(vec.begin() + cutIndex, vec.end());

    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "{";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "}" << endl;

    cout << "{";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0" << endl;

    return 0;
}