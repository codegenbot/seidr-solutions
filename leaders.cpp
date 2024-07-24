#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res(v.size(), 0); 
    int rightmost = v.back();
    for (int i = v.size() - 1; i >= 0; --i) {
        rightmost = v[i];
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] >= rightmost) {
                rightmost = v[j];
            }
        }
        res[i] = rightmost;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> res = leaders(v);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}