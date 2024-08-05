#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || vec[i] - vec[0] <= i) {
            res.first = vector<int>(vec.begin(), vec.begin() + i + 1);
            res.second = vector<int>(vec.begin() + i, vec.end());
            break;
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "Output: ";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    for(auto x : res.second) {
        cout << x << " ";
    }
    return 0;
}