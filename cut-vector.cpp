#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i=0; i<n-1; i++) {
        if(abs(v[i] - v[i+1]) <= 0 || abs(v[n-i-2] - v[n-i-1]) <= 0) {
            res.first = v.substr(0, i+1);
            res.second = v.substr(i+1);
            break;
        }
    }
    
    if(res.first.size() == 0) {
        res.first.push_back(v[0]);
        res.second = v;
    } else if(res.second.size() == 0) {
        res.second = v;
        res.first.clear();
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for(int i=0; i<res.first.size(); i++) {
        cout << res.first[i];
        if(i < res.first.size()-1) {
            cout << ", ";
        }
    }
    cout << "] [";
    for(int i=0; i<res.second.size(); i++) {
        cout << res.second[i];
        if(i < res.second.size()-1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}