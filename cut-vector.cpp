#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= n/2; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for(int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            pos = i;
        }
    }
    
    vector<int> left = {v[i] for i in range(pos)};
    vector<int> right = {v[i] for i in range(pos, n)};
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for(auto x : result.first) {
        cout << x << ' ';
    }
    cout << endl;
    
    cout << "Right: ";
    for(auto x : result.second) {
        cout << x << ' ';
    }
    cout << endl;
    
    return 0;
}