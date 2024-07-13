#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i <= n - 1; i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        
        if (left.size() != 0 && right.size() != 0) {
            int sumLeft = 0;
            for (int num : left) {
                sumLeft += num;
            }
            
            int sumRight = 0;
            for (int num : right) {
                sumRight += num;
            }
            
            if (sumLeft == sumRight) {
                res.first = left;
                res.second = right;
                return res;
            }
        }
    }
    
    vector<int> left(v.begin(), v.end());
    res.first = left;
    res.second.clear();
    return res;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "[";
    for (int num : res.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int num : res.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    
    return 0;
}