#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i <= v.size(); ++i) {
        if (i == v.size() || abs(v[i-1] - v[i]) < minDiff) {
            minDiff = abs(v[i-1] - v[i]);
            index = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + index), vector<int>(v.begin() + index, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    vector<int> res = cutVector(v);
    
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    return 0;
}