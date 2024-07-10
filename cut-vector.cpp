#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        vector<int> left, right;
        for (int j = 0; j <= i; j++) {
            left.push_back(v[j]);
        }
        for (int j = i + 1; j < n; j++) {
            right.push_back(v[j]);
        }
        
        int diff = abs((accumulate(left.begin(), left.end(), 0) - accumulate(right.begin(), right.end(), 0)) / (left.size() + right.size()));
        
        if ((accumulate(left.begin(), left.end(), 0) == accumulate(right.begin(), right.end(), 0)) || (diff == 0)) {
            result.push_back(left);
            result.push_back(right);
            return result;
        }
    }
    
    return {{}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "( ";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << ") (" << " ";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    cout << ")" << endl;
    
    return 0;
}