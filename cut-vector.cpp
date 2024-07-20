#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &v) {
    int n = v.size();
    vector<int> left(n);
    copy(v.begin(), v.end(), left.begin());
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < n; i++) {
        if (abs(left[i] - left[i-1]) <= minDiff) {
            minDiff = abs(left[i] - left[i-1]);
            cutIndex = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].resize(cutIndex+1);
    copy(v.begin(), v.begin()+cutIndex+1, result[0].begin());
    result[1].resize(n-cutIndex-1);
    copy(v.begin()+cutIndex+1, v.end(), result[1].begin());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i];
        if (i < result[0].size()-1) {
            cout << " ";
        }
    }
    cout << "] [" << "[";

    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i];
        if (i < result[1].size()-1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}