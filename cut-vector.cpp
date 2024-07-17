#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i=1; i<v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].push_back(v[0]);
    for(int i=1; i<=cutIndex; i++) {
        result[0].push_back(v[i]);
    }
    result[1] = v;
    result[1].erase(result[1].begin() + cutIndex, result[1].end());
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    cout << "[";
    for(int i=0; i<result[0].size(); i++) {
        cout << result[0][i];
        if(i < result[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    cout << "[";
    for(int i=0; i<result[1].size(); i++) {
        cout << result[1][i];
        if(i < result[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}