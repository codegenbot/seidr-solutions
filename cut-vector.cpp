#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cutIndex), vector<int>(v.begin() + cutIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "First half: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second half: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}