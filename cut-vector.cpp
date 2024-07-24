#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    vector<int> left = vector<int>(v.begin(), v.begin() + pos);
    vector<int> right = vector<int>(v.begin() + pos, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto result = cutVector(v);
    cout << "(";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << ")" << endl;
    cout << "(";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    cout << ")" << endl;
    return 0;
}