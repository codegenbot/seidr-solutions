#include <iostream>
#include <vector>

bool sameVector(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> a, int k) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > k) result.push_back(a[i]);
    }
    return result;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;
    vector<int> result = maximum(a, k);
    if (!sameVector(maximum(a, k), result)) return 1;
    return 0;
}