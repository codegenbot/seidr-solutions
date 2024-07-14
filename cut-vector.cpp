#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    
    for(int i=0; i<n-1; i++) {
        if(abs(vec[i] - vec[i+1]) <= 0 || abs(vec[0] - vec[n-1]) >= abs(vec[i] - vec[i+1])) {
            res[0].insert(res[0].end(), vec.begin(), vec.begin()+i+1);
            res[1].insert(res[1].begin(), vec.begin()+i, vec.end());
            break;
        }
    } else {
        res[0].insert(res[0].end(), vec.begin(), vec.end());
        res[1].clear();
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> result = cutVector(vec);
    
    cout << "[";
    for(auto x : result[0]) {
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for(auto x : result[1]) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}