#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    for(int i = 0; i <= n/2; i++) {
        if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
            res[0].clear();
            for(int j = 0; j <= i; j++)
                res[0].push_back(v[j]);
            break;
        }
        else {
            res[0].clear();
            for(int j = i; j < n; j++)
                res[0].push_back(v[j]);
            break;
        }
    }

    if(res[0].size() != n) {
        for(int i = 0; i <= n/2; i++) {
            if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
                res[1].clear();
                for(int j = i; j < n; j++)
                    res[1].push_back(v[j]);
                break;
            }
            else {
                res[1].clear();
                for(int j = 0; j <= i; j++)
                    res[1].push_back(v[j]);
                break;
            }
        }
    }

    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5}; 
    auto res = cutVector(v);
    
    for(auto vec : res) {
        for(int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}