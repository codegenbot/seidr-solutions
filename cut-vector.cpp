#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i=1; i<v.size(); i++) {
        if(abs(v[i] - v[0]) < minDiff) {
            minDiff = abs(v[i] - v[0]);
            splitIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + splitIndex), vector<int>(v.begin() + splitIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << "]\n[";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << "]";
    
    return 0;
}