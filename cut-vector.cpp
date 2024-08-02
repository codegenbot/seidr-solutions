#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        long sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < i; j++)
            sum1 += v[j];
        for (int j = i; j < v.size(); j++)
            sum2 += v[j];
        
        int diff = abs(sum1 - sum2);
        
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());
    
    return {left, right};
}

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (const auto& x : res.first) cout << x << " ";
    cout << "}, {";
    for (const auto& x : res.second) cout << x << " ";
    cout << "}\n";
    return 0;
}