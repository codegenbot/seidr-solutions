```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = -1;
    for(int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    vector<int> left = vector<int>(v.begin(), v.begin()+pos);
    vector<int> right = vector<int>(v.begin()+pos, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto res = cutVector(v);
    cout << "Left: ";
    for(auto x : res[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(int i = 0; i < res[1].size(); i++) {
        cout << res[1][i] << " ";
    }
    cout << endl;
    return 0;
}