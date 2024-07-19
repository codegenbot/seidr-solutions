#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> v, int k) {
    vector<int> maxv;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > k) {
            maxv.push_back(v[i]);
        }
    }
    return maxv;
}

bool compareVectors(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;

    if (!compareVectors(maximum(a, k), vector<int>())) return 1;
    return 0;
}