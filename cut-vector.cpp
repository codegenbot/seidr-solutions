#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if (n == 1) {
        res.push_back(v);
        return res;
    }
    
    for(int i=0; i<n-1; ++i) {
        int leftSum = 0, rightSum = 0;
        for(int j=i; j>=0; --j) {
            leftSum += v[j];
        }
        for(int j=i+1; j<n; ++j) {
            rightSum += v[j];
        }
        
        if (abs(leftSum - rightSum) <= abs(v[i] - v[n-1])) {
            res.push_back(vector<int>(v.begin(), v.begin()+i+1));
            res.push_back(vector<int>(v.begin()+i, v.end()));
            return res;
        }
    }
    
    // Add the last element to both sub-vectors
    res.push_back(v);
    res.push_back(vector<int>());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i=0; i<result[0].size(); ++i) {
        cout << result[0][i];
        if(i!=result[0].size()-1)
            cout << " ";
    }
    cout << "]\n[";
    for (int i=0; i<result[1].size(); ++i) {
        cout << result[1][i];
        if(i!=result[1].size()-1)
            cout << " ";
    }
    cout << "]\n";
    return 0;
}