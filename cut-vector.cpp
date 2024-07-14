#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left = vector<int>(v.begin(), v.begin() + cutIndex);
    vector<int> right = vector<int>(v.begin() + cutIndex, v.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << " " << result.second[i];
    }
    cout << "]" << endl;
    
    return 0;
}