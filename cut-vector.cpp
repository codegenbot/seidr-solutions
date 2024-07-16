#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    if (n == 1) return {v};

    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < n-1; i++) {
        long long sum1 = 0, sum2 = 0;
        
        for(int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        
        for(int j = i+1; j < n; j++) {
            sum2 += v[j];
        }
        
        long long diff = abs((long long)sum1 - sum2);
        
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cutIndex), vector<int>(v.begin() + cutIndex, v.end())};
}

int main() {
    // Your test code here
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << res.first.size() << endl;
    for(int x : res.first) cout << x << " ";
    cout << endl;
    cout << res.second.size() << endl;
    for(int y : res.second) cout << y << " ";
    cout << endl;

    return 0;
}