#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n-1; ++i) {
        if (abs(v[i] - v[i+1]) <= abs(v[0] - v[n-1])) {
            vector<int> a(v.begin(), v.begin() + i + 1);
            vector<int> b(v.begin() + i, v.end());
            return {a, b};
        }
    }
    vector<int> a = v;
    vector<int> b = {};
    return {a, b};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    auto [a, b] = cutVector(v);
    cout << "1\n";
    for (auto x : a) {
        cout << x << " ";
    }
    cout << "\n0\n";
    for (auto x : b) {
        cout << x << " ";
    }
    return 0;
}