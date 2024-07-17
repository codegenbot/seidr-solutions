#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cutIndex + 1);
    vector<int> right(v.begin() + cutIndex, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}