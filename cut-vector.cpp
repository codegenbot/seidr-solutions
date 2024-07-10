#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec = {vec[0]};
    for (int i = 1; i < cutIndex; i++) {
        if (vec[i] == vec[0]) {
            leftVec.push_back(vec[i]);
        } else break;
    }
    
    vector<int> rightVec = {vec[cutIndex]};
    for (int i = cutIndex + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
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
    cout << result.first[0];
    for (int i = 1; i < result.first.size(); i++) {
        cout << " " << result.first[i];
    }
    cout << endl;
    cout << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << " " << result.second[i];
    }
    cout << endl;
    return 0;
}