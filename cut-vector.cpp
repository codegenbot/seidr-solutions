#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || abs(v[i] - v[i-1]) < minDiff) {
            minDiff = abs(v[i] - v[i-1]);
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
    cout << "First part: ";
    for (const auto &x : res[0]) cout << x << " ";
    cout << endl;
    cout << "Second part: ";
    for (auto it = res[1].begin(); it != res[1].end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}