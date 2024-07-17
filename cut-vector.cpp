#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i=0; i<vec.size()-1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(index + 1);
    result[1].reserve(vec.size() - (index + 1));
    
    for(int i=0; i<=index; i++) {
        result[0].push_back(vec[i]);
    }
    for(int i=index+1; i<vec.size(); i++) {
        result[1].push_back(vec[i]);
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& x : vec) {
        cin >> x;
    }
    
    vector<vector<int>> res = cutVector(vec);
    
    cout << "[";
    for(int i=0; i<res[0].size(); i++) {
        cout << res[0][i];
        if(i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "]\n[";
    
    for(int i=0; i<res[1].size(); i++) {
        cout << res[1][i];
        if(i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]";
    
    return 0;
}