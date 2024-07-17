#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left = vector<int>(v.begin(), v.begin() + cutIndex);
    vector<int> right = vector<int>(v.begin() + cutIndex, v.end());
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}