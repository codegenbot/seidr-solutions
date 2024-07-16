#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for(int i=1; i<v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + pos), vector<int>(v.begin() + pos, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<int> res = cutVector(v);
    cout << res[0].size() << endl;
    for(auto x : res[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << res[1].size() << endl;
    for(auto x : std::vector<int>(res[1]).begin(), e = std::vector<int>(res[1]).end(); auto i = x; i != e; ++i) {
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}