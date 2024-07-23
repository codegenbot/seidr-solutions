#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;
    
    for(int i=1; i<vec.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<i; ++j) {
            sum1 += vec[j];
        }
        for(int j=i; j<vec.size(); ++j) {
            sum2 += vec[j];
        }
        
        int diff = abs(sum1 - sum2);
        if(diff <= min_diff) {
            min_diff = diff;
            res.first = vector<int>(vec.begin(), vec.begin()+i);
            res.second = vector<int>(vec.begin()+i, vec.end());
        }
    }
    
    return res;
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; ++i) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "[";
    for(auto x:res.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for(auto x:res.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}