#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        
        if (i + 1 == n || v[i] != v[i+1]) {
            int rightSum = 0;
            for (int j = i + 1; j < n; j++) {
                rightSum += v[j];
            }
            
            int diff = abs(leftSum - rightSum);
            if (diff < minDiff) {
                minDiff = diff;
                cutIndex = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i <= cutIndex; i++) {
        result[0].push_back(v[i]);
    }
    for (int i = cutIndex + 1; i < n; i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}

int main() {
    vector<int> v;
    int num;
    cin >> num;
    while(num--) {
        cin >> num;
        v.push_back(num);
    }

    vector<vector<int>> result = cutVector(v);

    for (auto& sub : result) {
        for (auto& x : sub) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}