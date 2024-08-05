#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i-1] - vec[i]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            res.first = vector<int>(vec.begin(), vec.begin() + i);
            res.second = vector<int>(vec.begin() + i, vec.end());
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}