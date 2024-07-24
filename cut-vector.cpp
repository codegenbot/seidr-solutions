#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for(int i = 1; i <= n; ++i) {
        vector<int> left, right;
        if(i == 1) {
            left.push_back(v[0]);
            right = v.substr(1);
        } else if(i == n) {
            left = v.substr(0, n - 1);
            right.push_back(v[n - 1]);
        } else {
            left = v.substr(0, i - 1);
            right = v.substr(i, n - i);
        }
        
        int diffLeft = 0, sumLeft = 0;
        for(int j = 0; j < left.size(); ++j) {
            sumLeft += left[j];
            if(sumLeft != diffLeft) break;
            diffLeft++;
        }
        
        int diffRight = 0, sumRight = 0;
        for(int j = 0; j < right.size(); ++j) {
            sumRight += right[j];
            if(sumRight != diffRight) break;
            diffRight++;
        }
        
        result.push_back(left);
        result.push_back(right);
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    for(auto &v : res) {
        cout << "[";
        for(int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}