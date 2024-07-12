#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] - v[i-1] < minDiff) {
            minDiff = v[i] - v[i-1];
            cutIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin()+cutIndex), vector<int>(v.begin()+cutIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    vector<int> res = cutVector(v);
    for (const auto &x : res[0]) cout << x << " ";
    cout << endl;
    for (const auto &x : res[1]) cout << x << " ";
    return 0;
}