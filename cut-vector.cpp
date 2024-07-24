#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> leftVec(1, vec[0]);
    for (int i = 0; i < cutIndex; i++) {
        leftVec.push_back(vec[i + 1]);
    }
    vector<int> rightVec = vec;
    rightVec.erase(rightVec.begin() + cutIndex, rightVec.end());
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
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << " " << result.second[i];
    }
    cout << "]";
    return 0;
}